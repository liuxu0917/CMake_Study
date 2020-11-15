//
// Created by liuxu on 2020-11-08.
//

#ifndef CMAKE_STUDY_COMMON_H
#define CMAKE_STUDY_COMMON_H

#include <string>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <iostream>


using namespace std;



class Study {

public:
    virtual void run() {
        std::cout << "==============Enter Test===========" << std::endl;
        MainTest();
        std::cout << "==============Exit  Test===========" << std::endl << std::endl;
    }

private:
    virtual void MainTest() = 0;

};
#endif //CMAKE_STUDY_COMMON_H
