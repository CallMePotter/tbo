# CMakeLists.txt in the root directory of the project

cmake_minimum_required(VERSION 3.10)

# Define the project and set the version
project(chess VERSION 1.0)

# Add the subdirectory for the main source files
#add_subdirectory(src)
add_executable(chess src/main.cpp)