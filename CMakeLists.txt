cmake_minimum_required(VERSION 3.10)
project(CalculatorProject)

set(CMAKE_CXX_STANDARD 17)

add_executable(calculator
    main.cpp
    calculator.cpp
    calculator.h
)