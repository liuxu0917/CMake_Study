cmake_minimum_required(VERSION 3.1)
project(sqlite)

set(SQLITE_INCLUDE_DIR ../../include/sqlite)

file(GLOB SQLITE_HEADERS ${SQLITE_INCLUDE_DIR}/*.h)
file(GLOB SQLITE_SOURCES ./*.c)


if(UNIX)
link_libraries(pthread dl)  #链接系统库
ENDIF ()

add_library(${PROJECT_NAME} SHARED ${SQLITE_HEADERS} ${SQLITE_SOURCES})


