cmake_minimum_required(VERSION 4.00)
project(XTF_Reader VERSION 1.0)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(include)
add_executable(XTF_Reader src/main.cpp)