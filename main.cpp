
#include "Common.h"
#include "Utils/Utils.h"
#include "RegStduy.hpp"
#include "CPlusPlsuStudy.hpp"
#include "SqliteStudy.hpp"
#include <JsonTest.hpp>

void run(list<Study *> &itemList) {
    for (const auto item : itemList) {
        item->run();
    }
}


int main() {
//    system("chcp 65001");
    cout << "开始时间:" << time(0) << endl;
    Utils::OutPut();
    list<Study *> itemList;
    MallocStats();
    itemList.push_back(new RegStduy);
    itemList.push_back(new CPlusPlsuStudy);
//    itemList.push_back(new SqliteStudy);
    itemList.push_back(new JsonTest);
    MallocStats();
    run(itemList);
    MallocStats();
    cout << "结束时间:" << time(0) << endl;
//    system("pause");
    return 0;
}
