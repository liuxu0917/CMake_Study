cmake_minimum_required(VERSION 3.1)
project(Tools)  #设置项目名称

add_library(Tools STATIC Tools.cpp)
#add_library(Tools SHARED Tools.cpp)