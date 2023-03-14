# CMakeLists.txt in the root directory of the project

cmake_minimum_required(VERSION 3.10)

# Define the project and set the version
project(chess VERSION 1.0)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_ "-O3")

# Add the subdirectory for the main source files
#add_subdirectory(src)
add_executable(chess src/main.cpp)