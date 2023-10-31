cmake_minimum_required(VERSION 3.26)
project(SimpleCalculator)

set(CMAKE_CXX_STANDARD 11)

add_executable(SimpleCalculator main.cpp
        token.h
        token_stream.cpp
        token_stream.h
        calculator.cpp
        calculator.h)
