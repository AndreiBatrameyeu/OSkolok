cmake_minimum_required(VERSION 3.15)
project(OSkolok)

set(CMAKE_CXX_STANDARD 11)


add_executable(OSkolokApp main.cpp OSkolok.cpp)


add_executable(SimpleTests tests/test_fibonacci.cpp OSkolok.cpp)