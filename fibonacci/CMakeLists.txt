# Specify the minimum version for CMake
cmake_minimum_required(VERSION 3.1.3)
# Project's name
project(fibo)
# Set the output folder where your program will be created
set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${PROJECT_BINARY_DIR}/bin)
set(LIBRARY_OUTPUT_PATH ${PROJECT_BINARY_DIR}/lib)
add_library(fibonacci fibo.cc)
add_executable(fibo ${PROJECT_SOURCE_DIR}/main.cc)
target_link_libraries(fibo fibonacci)
# The following folder will be included
include_directories("${PROJECT_SOURCE_DIR}")

