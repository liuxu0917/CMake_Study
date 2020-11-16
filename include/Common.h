//
// Created by liuxu on 2020-11-08.
//

#ifndef CMAKE_STUDY_COMMON_H
#define CMAKE_STUDY_COMMON_H

#include <ctime>
#include <malloc.h>
#include <string>
#include <list>
#include <vector>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <iostream>
#include <limits>

#ifdef WIN32

#include <windows.h>

#else
#include <sys/time.h>
#include <unistd.h>
#endif

//void GetSysTime() {
//#ifdef WIN32
//#else
//#endif
//}

inline void MallocStats() {
#ifdef UNIX
    malloc_stats();
#endif
}

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
