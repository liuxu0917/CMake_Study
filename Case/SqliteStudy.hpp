//
// Created by liuxu on 2020-11-14.
//

#ifndef CMAKE_STUDY_SQLITESTUDY_HPP
#define CMAKE_STUDY_SQLITESTUDY_HPP

#include "Common.h"
#include "sqlite3.h"

class SqliteStudy : public Study {
public:
    void MainTest() override;

private:
    sqlite3 *sql = nullptr; // 一个打开的数据库实例
    sqlite3_stmt *stmt = nullptr;        //stmt语句句柄
    const string dbFileName = "test.db";//某个数据库文件的路径

    void createDb();

    void createTable();

    void searchData();

    void insertData();

    int operateDB(string &sqlSentence, bool finalize = true);

    void getData();
};


#endif //CMAKE_STUDY_SQLITESTUDY_HPP
