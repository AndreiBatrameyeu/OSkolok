cmake_minimum_required(VERSION 3.15)
project(PalindromChecker)

set(CMAKE_CXX_STANDARD 11)

add_executable(PalindromApp main.cpp palindrom.cpp)

add_executable(PalindromTests tests/test_palindrom.cpp palindrom.cpp)