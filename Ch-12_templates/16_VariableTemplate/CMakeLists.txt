cmake_minimum_required(VERSION 3.5)

project(Ch1-Ex1)

# Set C++ standard
# set(CMAKE_CXX_STANDARD 20)
# set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Check the compiler version
if (CMAKE_CXX_COMPILER_VERSION VERSION_LESS "13")
    message(FATAL_ERROR "Your compiler version is too old. Please use a newer version.")
endif()

add_executable(main
    VariableTemplate.cpp
    )

target_compile_options(main PRIVATE -Wall -Wextra -std=c++20)
