cmake_minimum_required(VERSION 3.8)
project(fibonacci_c)

set(CMAKE_C_STANDARD 11)

set(SOURCE_FILES main.c fibonacci.h fibonacci.c)
add_executable(fibonacci_c ${SOURCE_FILES} fibonacci.h fibonacci.c)