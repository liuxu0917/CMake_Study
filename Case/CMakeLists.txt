cmake_minimum_required(VERSION 3.1)
project(Case)


file(GLOB CASE_HEADERS ./*.hpp)
file(GLOB CASE_SOURCES ./*.cpp)

link_libraries(sqlite)

add_library(${PROJECT_NAME} SHARED ${CASE_HEADERS} ${CASE_SOURCES})