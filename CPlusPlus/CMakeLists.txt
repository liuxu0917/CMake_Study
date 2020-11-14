cmake_minimum_required(VERSION 3.1)
project(CPlusPlus)


file(GLOB CPLUSPLUS_HEADERS ./*.hpp)
file(GLOB CPLUSPLUS_SOURCES ./*.cpp)



add_library(${PROJECT_NAME} SHARED ${CPLUSPLUS_HEADERS} ${CPLUSPLUS_SOURCES})