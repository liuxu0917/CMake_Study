//
// Created by liuxu on 2020-11-14.
//

#include <algorithm>
#include "SqliteStudy.hpp"

void SqliteStudy::createDb() {

    // 根据文件路径打开数据库连接。如果数据库不存在，则创建。
    // 数据库文件的路径必须以C字符串传入。
    int result = sqlite3_open_v2(dbFileName.c_str(), &sql,
                                 SQLITE_OPEN_READWRITE | SQLITE_OPEN_CREATE | SQLITE_OPEN_NOMUTEX |
                                 SQLITE_OPEN_SHAREDCACHE, NULL);

    if (result == SQLITE_OK) {
        cout << "打开数据库连接成功" << endl;
    } else {
        cout << "打开数据库连接失败" << endl;
    }
}

int SqliteStudy::operateDB(string &sqlSentence, bool finalize) {

//    transform(sqlSentence.begin(), sqlSentence.end(), sqlSentence.begin(), ::towlower);
    //进行插入前的准备工作——检查语句合法性
    //-1代表系统会自动计算SQL语句的长度
    int result = sqlite3_prepare_v2(sql, sqlSentence.c_str(), -1, &stmt, NULL);

    if (result == SQLITE_OK) {
        cout << "SQL语句检查OK:" << sqlSentence << endl;

        result = sqlite3_step(stmt); //执行该语句
    } else {
        cout << "SQL语句检查错误:" << sqlSentence << endl;
    }
    //清理语句句柄，准备执行下一个语句
    if (finalize) {
        sqlite3_finalize(stmt);
    }
    return result;

}

void SqliteStudy::createTable() {
    string sqlSentence = "CREATE TABLE IF NOT EXISTS testTable (id integer PRIMARY KEY AUTOINCREMENT, name text NOT NULL UNIQUE);";
    operateDB(sqlSentence);
}

void SqliteStudy::insertData() {
    string sqlSentence = "INSERT INTO testTable(name) VALUES('liuxu1'); ";
    operateDB(sqlSentence);
}

void SqliteStudy::searchData() {
    string sqlSentence = "SELECT * FROM testTable;";
    if (SQLITE_ROW == operateDB(sqlSentence, false)) {
        getData();
        // 每调一次sqlite3_step()函数，stmt语句句柄就会指向下一条记录
        while (sqlite3_step(stmt) == SQLITE_ROW) {
            getData();
        }
    } else {
        cout << "查询数据库失败" << endl;
    }
}

void SqliteStudy::getData() {
    // 取出第0列字段的值
    const int id = sqlite3_column_int(stmt, 0);
    // 取出第1列字段的值
    const unsigned char *namePtr = sqlite3_column_text(stmt, 1);
    const string name((char *) (namePtr));
    //输出相关查询的数据
    cout << "id = " << id << ", age = " << name << endl;

}

void SqliteStudy::MainTest() {
    createDb();
    createTable();
    insertData();
    searchData();
}
