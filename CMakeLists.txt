cmake_minimum_required(VERSION 3.20.0)
project(riften VERSION 0.1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(RIFTEN_DIR "${CMAKE_CURRENT_SOURCE_DIR}/src")

add_executable(riften
    ${RIFTEN_DIR}/main.cpp
)