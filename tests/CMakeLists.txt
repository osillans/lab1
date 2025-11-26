project(CalculatorTests)

add_executable(CalculatorTests
    CalculatorTests.cpp
)

target_include_directories(CalculatorTests PRIVATE ../)