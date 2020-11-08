cmake_minimum_required(VERSION 3.1)
project(jsoncpp)  #设置项目名称


set(JSONCPP_INCLUDE_DIR ../include)

set(PUBLIC_HEADERS
        ${JSONCPP_INCLUDE_DIR}/json/config.h
        ${JSONCPP_INCLUDE_DIR}/json/forwards.h
        ${JSONCPP_INCLUDE_DIR}/json/json_features.h
        ${JSONCPP_INCLUDE_DIR}/json/value.h
        ${JSONCPP_INCLUDE_DIR}/json/reader.h
        ${JSONCPP_INCLUDE_DIR}/json/version.h
        ${JSONCPP_INCLUDE_DIR}/json/writer.h
        ${JSONCPP_INCLUDE_DIR}/json/assertions.h
        )

set(JSONCPP_SOURCES
    json_tool.h
    json_reader.cpp
    json_valueiterator.inl
    json_value.cpp
    json_writer.cpp
)

add_library(${PROJECT_NAME} SHARED ${PUBLIC_HEADERS} ${JSONCPP_SOURCES})


