cmake_minimum_required(VERSION 3.1) #设置CMake版本要求
project(CMake_Study)  #设置项目名称

set (CMAKE_CXX_STANDARD 14)  #设置C++版本

set(CMAKE_BUILD_TYPE "Debug") #设置Debug模式
#set(CMAKE_BUILD_TYPE "Release") #设置Release模式

IF (WIN32)
    MESSAGE(STATUS "Now is windows")
    add_definitions(-D WIN32)
ELSEIF (APPLE)
    MESSAGE(STATUS "Now is Apple systens.")
    add_definitions(-D APPLE)
ELSEIF (UNIX)
    MESSAGE(STATUS "Now is UNIX-like OS's.")
    add_definitions(-D UNIX)
ENDIF ()

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)  #设置执行文件输出目录

set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)  #设置库文件输出目录

SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
SET(CMAKE_INSTALL_RPATH ${PROJECT_SOURCE_DIR}/lib)   #设置运行时动态链接库加载目录

include_directories (${PROJECT_SOURCE_DIR}/include)  #设置头文件目录
include_directories (${PROJECT_SOURCE_DIR}/include/sqlite)


include_directories (${PROJECT_SOURCE_DIR}/Case)  #设置头文件目录
include_directories (${PROJECT_SOURCE_DIR}/CPlusPlus)  #设置头文件目录


add_subdirectory (Utils)  #设置子目录
add_subdirectory (Case)
add_subdirectory (3rdTools)
add_subdirectory (CPlusPlus)

link_directories(${PROJECT_SOURCE_DIR}/lib)  #设置静态库目录

#link_libraries(jsoncpp sqlite)  #链接三方库
link_libraries(Utils Case CPlusPlus)  #链接库

add_executable (CMake_Study main.cpp)
FILE(GLOB FILES ${PROJECT_SOURCE_DIR}/lib/*)
FOREACH(FILE_PATH ${FILES})
    STRING(REGEX REPLACE ".+/(.+)\\..*" "\\1" FILE_NAME ${FILE_PATH})
    MESSAGE(${FILE_PATH}\ ${FILE_NAME})
ENDFOREACH(FILE_PATH)


#file(COPY "${PROJECT_SOURCE_DIR}/lib/*dll" DESTINATION ${PROJECT_SOURCE_DIR}/output)
#install(FILES Tools.h DESTINATION ${PROJECT_SOURCE_DIR}/include)

#target_link_libraries (CMake_Study Tools)  #链接静态库
