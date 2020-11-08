//
// Created by liuxu on 2020-10-31.
//

#include "RegStduy.h"
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

void RegStduy::MailTest() {
    string str("Email liuxu0917@live.com abc");
    string e("(\\w+)@(\\w+\\.com)");
    Common(str, e);
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
    regex e("(\\d+)");
    smatch m;
    string regStr = str;
    while (std::regex_search(regStr, m, e)) {
        string result = m.begin()->str();
        str.replace(str.find(result), result.size(), '[' + result + ']');
        regStr = m.suffix();
    }
    cout << str << endl;
}


void RegStduy::MainTest() {
    RegStduy regStduy;
    regStduy.MailTest();
    regStduy.NumTest();
    regStduy.Test1();
    regStduy.StringReplace();
}
