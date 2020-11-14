
#include "Common.h"
#include "Utils/Utils.h"
#include "Tools/Tools.h"
#include "RegStduy.hpp"
#include "CPlusPlsuStudy.hpp"
#include "SqliteStudy.hpp"

void run(list<Study*> &itemList){
    for(const auto item : itemList){
        item->run();
    }
}
int main() {
    Utils::OutPut();
    Tools::OutPut();
    list<Study*> itemList;
    itemList.push_back(new RegStduy);
    itemList.push_back(new CPlusPlsuStudy);
    itemList.push_back(new SqliteStudy);





    run(itemList);
    return 0;
}
