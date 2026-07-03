cmake_minimum_required(VERSION 3.10)

project(Day1)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(Day1 main.cpp)

target_compile_options(Day1 PRIVATE
    -Wall
    -Wextra
)