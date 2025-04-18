cmake_minimum_required(VERSION 4.0)
project(lhmilycpp)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_C_STANDARD 23)
include_directories(/opt/homebrew/include)

file(GLOB_RECURSE SOURCES "main.cpp" "src/*.cpp")
add_executable(lhmilycpp ${SOURCES})