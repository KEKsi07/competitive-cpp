cmake_minimum_required(VERSION 3.20)
project(competitive_cpp LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(
    cp_main
    src/main.cpp
    src/solution.cpp
)

target_include_directories(cp_main PRIVATE include)

include(FetchContent)
    FetchContent_Declare(
    googletest
    URL
    https://github.com/google/googletest/archive/refs/tags/v1.14.0.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
    cp_tests
    tests/solution_test.cpp
    src/solution.cpp
)

target_include_directories(cp_tests PRIVATE include)
target_link_libraries(cp_tests PRIVATE gtest_main)
include(GoogleTest)
gtest_discover_tests(cp_tests)