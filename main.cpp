#include <iostream>
#include <map>
#include "Utils.h"
#include "Tools.h"

int main() {
    std::cout << "Hello, World!" << std::endl;
    Utils utils;
    utils.OutPut();
    Tools tools;
    tools.OutPut();
    std::map<int,std::string> testmap;
    testmap.insert(std::make_pair(1,"11"));
    testmap.insert(std::make_pair(2,"22"));
    testmap.insert(std::make_pair(3,"33"));
    for (auto iter = testmap.begin(); iter != testmap.end(); ) {
        std::cout<<iter->second<<std::endl;
        if( iter->first==1)testmap.erase(iter++);
        else ++iter;
    }
    for ( auto &pair:testmap){
        std::cout<<pair.second<<std::endl;
    }
//    system("pause");
    return 0;
}
