cmake_minimum_required(VERSION 3.1)
project(jsoncpp)  #设置项目名称


set(JSONCPP_INCLUDE_DIR ../../include/json)

file(GLOB JSONCPP_HEADERS ${JSONCPP_INCLUDE_DIR}/*.h)
file(GLOB JSONCPP_SOURCES ./*)



add_library(${PROJECT_NAME} SHARED ${JSONCPP_HEADERS} ${JSONCPP_SOURCES})


