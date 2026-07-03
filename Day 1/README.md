# Day 1 - Modern C++ Memory Management

## Project Overview

This project serves as an example of modern C++ memory management. The project implements creating objects in both stack and heap and uses `std::unique_ptr` to ensure safe memory management.

## Project Files

- `main.cpp` - Source code file.
- `CMakeLists.txt` - Project configuration using CMake.
- `README.md` - Information about the project.

## Stack Memory

The stack memory is for local objects and variables. Memory management is implemented automatically by the compiler; the process of allocating/deallocating memory is fast.

## Heap Memory

The heap memory is for dynamically created objects. More flexible, yet slower because of manual memory management.

## Smart Pointers

Smart pointers are used to manage the heap memory in this project. They automatically free the memory after use, which prevents possible memory leak issues.

## Compiler

- GCC (MinGW-w64)

## Build System

- CMake