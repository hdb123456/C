cmake_minimum_required(VERSION 3.10)
project(DetectStripes)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# 包含头文件目录
include_directories(include)
# 指定源文件
file(GLOB SOURCES "src/test1.cpp")
# 生成可执行文件
add_executable(test1 ${SOURCES})
