
#include "Common.h"
#include "Utils/Utils.h"
#include "RegStduy.hpp"
#include "CPlusPlsuStudy.hpp"
#include "SqliteStudy.hpp"
#include <JsonTest.hpp>

void run(list<Study*> &itemList){
    for(const auto item : itemList){
        item->run();
    }
}
int main() {

#ifdef UNIX
    cout<<"UNIX"<<endl;
#endif
    Utils::OutPut();
    list<Study*> itemList;
    itemList.push_back(new RegStduy);
    itemList.push_back(new CPlusPlsuStudy);
    itemList.push_back(new SqliteStudy);
    itemList.push_back(new JsonTest);





    run(itemList);
    return 0;
}
