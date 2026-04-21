add_library(puzzle_generation 
    matrix.cc
)

target_include_directories(puzzle_generation
    PUBLIC
    ${CMAKE_SOURCE_DIR}/src
)

add_executable(matrix_test matrix_test.cc)

target_link_libraries(matrix_test PRIVATE
    puzzle_generation
    GTest::gtest_main
    GTest::gmock
)

target_include_directories(matrix_test PRIVATE
    ${CMAKE_SOURCE_DIR}/include
    ${CMAKE_CURRENT_SOURCE_DIR}/mocks
)

gtest_discover_tests(matrix_test)
