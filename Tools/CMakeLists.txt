cmake_minimum_required(VERSION 3.1)
project(Tools)  #设置项目名称


set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/../lib)  #设置库文件输出目录

add_library(Tools STATIC Tools.cpp)
#add_library(Tools SHARED Tools.cpp)
