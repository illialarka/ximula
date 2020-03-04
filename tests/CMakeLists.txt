# cmake version
cmake_minimum_required(VERSION 3.4)

project(ximula_tests)

set(XIMULA_TESTS_SOURCE_FILES
	main.cpp)

# build googletests
add_subdirectory(lib/googletest)

add_executable(ximula_tests ${XIMULA_TESTS_SOURCE_FILES})

# include googletest header files
target_link_libraries(ximula_tests gtest)

target_include_directories(ximula_tests PUBLIC lib/googletest/include)

