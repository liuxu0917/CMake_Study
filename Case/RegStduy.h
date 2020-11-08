//
// Created by liuxu on 2020-10-31.
//

#ifndef CMAKE_STUDY_REGSTDUY_H
#define CMAKE_STUDY_REGSTDUY_H

#include "Common.h"

class RegStduy {
public:
    static void MainTest();

private:
    void MailTest();

    void Common(string &source, string &regex);

    void NumTest();

    void Test1();

    void StringReplace();
};


#endif //CMAKE_STUDY_REGSTDUY_H
