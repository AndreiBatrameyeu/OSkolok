cmake_minimum_required(VERSION 3.15)
project(ReverseList)

set(CMAKE_CXX_STANDARD 11)

add_executable(ReverseListApp main.cpp reverse_list.cpp)

add_executable(ReverseListTests tests/test_reverse_list.cpp reverse_list.cpp)