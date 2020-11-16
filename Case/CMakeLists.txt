cmake_minimum_required(VERSION 3.1)
project(Case)

set (CMAKE_CXX_STANDARD 14)


include_directories (${PROJECT_SOURCE_DIR}/include/json)
include_directories (${PROJECT_SOURCE_DIR}/include/sqlite)

file(GLOB CASE_HEADERS ./*.hpp)
file(GLOB CASE_SOURCES ./*.cpp)

link_libraries(sqlite json)

add_library(${PROJECT_NAME} SHARED ${CASE_HEADERS} ${CASE_SOURCES})