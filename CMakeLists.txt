cmake_minimum_required(VERSION 3.1) #设置CMake版本要求
project(CMake_Study)  #设置项目名称

set (CMAKE_CXX_STANDARD 14)  #设置C++版本

set (EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/output)  #设置执行文件输出目录

set (LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)  #设置库文件输出目录

#SET(CMAKE_BUILD_WITH_INSTALL_RPATH TRUE)
#SET(CMAKE_INSTALL_RPATH "\${ORIGIN}/lib")   #设置运行时动态链接库加载目录


include_directories (${PROJECT_SOURCE_DIR}/include)  #设置头文件目录

add_subdirectory (Utils)  #设置子目录
add_subdirectory (Tools)  #设置子目录

link_directories(${PROJECT_SOURCE_DIR}/lib)  #设置静态库目录

link_libraries(Utils Tools)  #链接静态库
#link_libraries(Utils ${PROJECT_SOURCE_DIR}/lib/libTools.a)  #链接静态库
#link_libraries(Utils ${PROJECT_SOURCE_DIR}/lib/libTools.dll.a)  #链接静态库
#link_libraries(Utils ${PROJECT_SOURCE_DIR}/lib/libTools.dll)  #链接静态库

add_executable (CMake_Study main.cpp)

#target_link_libraries (CMake_Study Tools)  #链接静态库

