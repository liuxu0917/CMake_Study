//
// Created by liuxu on 2020-10-31.
//

#ifndef CMAKE_STUDY_REGSTDUY_HPP
#define CMAKE_STUDY_REGSTDUY_HPP

#include "Common.h"

class RegStduy : public Study {
public:
    void MainTest() override;

private:

    void Common(string &source, string &regex);

    void NumTest();

    void Test1();

    void StringReplace();
};


#endif //CMAKE_STUDY_REGSTDUY_HPP
