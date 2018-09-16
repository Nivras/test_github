cmake_minimum_required(VERSION 3.12)
project(test_github)

set(CMAKE_CXX_STANDARD 14)

add_executable(test_github main.cpp TestCount.cpp TestCount.h)