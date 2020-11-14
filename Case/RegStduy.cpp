//
// Created by liuxu on 2020-10-31.
//

#include "RegStduy.hpp"
#include <regex>


void RegStduy::Common(string &source, string &reg) {
    smatch m;
    regex e(reg);
    cout << "source:" << source << endl;
    cout << "reg:" << reg << endl;
    while (std::regex_search(source, m, e)) {
        for (auto item : m) {
            cout << item << " ";
        }
        cout << endl;
        if (m.size() <= 2) {
            break;
        }
        source = m.suffix();
    }
}

void RegStduy::NumTest() {
    string str("asdadas123asdasdas456asdasdasd7890asdasd");
    string e("(\\d+)");
    Common(str, e);
}

void RegStduy::Test1() {
    string str("Name:Aurora Age:18");
    string e("Name:(\\w+)\\s*Age:(\\d{1,3})");
    Common(str, e);
}

void RegStduy::StringReplace() {
    string str("asdadas123asdasdas456asdasdasd7890asdasd");
    cout << regex_replace(str,regex("(\\d+)"),"[$1]") << endl;
}



void RegStduy::MainTest() {
    RegStduy regStduy;
    regStduy.NumTest();
    regStduy.Test1();
    regStduy.StringReplace();
}
