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
    01_ReferenceVariables.cpp
    # 02_ReferenceDataMembers.cpp
    # 03_ReferenceParameters.cpp
    # 04_ConstReferenceParameters.cpp
    # 05_OddsEvensPtrs.cpp
    # 06_OddsEvensRefs.cpp
    # 07_OddsEvensVector.cpp
    # 08_OddsEvensReturn.cpp
    )

target_compile_options(main PRIVATE -Wall -Wextra -std=c++20)
