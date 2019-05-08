# CMakeList.txt : CMake project for AssertionCollector, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

# add_compile_definitions(FAILED_CHECK_NAME="failed_check_C:\\\\Users\\\\tc\\\\Programming\\\\C++\\\\AssertionCollector\\\\AssertionCollector\\\\AssertionCollector.cpp:10")
# add_compile_definitions(FAILED_CHECK_NAME="failed_check_C:\\\\Users\\\\tc\\\\Programming\\\\C++\\\\AssertionCollector\\\\AssertionCollector\\\\AssertionCollector.cpp:11")
# add_compile_definitions(FAILED_CHECK_NAME="failed_check_C:\\\\Users\\\\tc\\\\Programming\\\\C++\\\\AssertionCollector\\\\AssertionCollector\\\\AssertionCollector.cpp:12")

add_executable (AssertionCollector "AssertionCollector.cpp" "Assertions.h" "AssertionCollector.h")
