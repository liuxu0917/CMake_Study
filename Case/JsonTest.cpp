//
// Created by liuxu on 2020-11-15.
//

#include <json/value.h>
#include "JsonTest.hpp"

void JsonTest::MainTest() {
    Json::Value jsonObject;
    Json::Value array(Json::arrayValue);
    array.append(1);
    array.append(2);
    array.append(3);
    jsonObject["array"]= array;
    cout<<jsonObject.toStyledString()<<endl;
    cout<<jsonObject.type()<<endl;
}
