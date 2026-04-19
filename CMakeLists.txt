cmake_minimum_required(VERSION 4.3)
project(kenken)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include(FetchContent)

FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG        release-1.17.0
)
FetchContent_MakeAvailable(googletest)

add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)

enable_testing()

add_executable(${PROJECT_NAME} main.cpp)

target_link_libraries(${PROJECT_NAME} puzzle_generation)

add_subdirectory(src)
