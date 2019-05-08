#pragma once

#include <iostream>
#include <cassert>
#include <string>
#include <cstring>

#ifndef FAILED_CHECK_NAME
#define FAILED_CHECK_NAME "no_check_failed"
#endif

#define AS_EVALUATED_STRING(arg) AS_STRING(arg)
#define AS_STRING(arg) #arg

#define ASSERT_XXX(condition) ASSERT_XXX_WITH_FILE_AND_LINE(condition, __FILE__, AS_EVALUATED_STRING(__LINE__))

#define ASSERT_XXX_WITH_FILE_AND_LINE(condition, file, line)\
  do {\
	PrintDefineForFaultInjection(file, line);\
	/* std::cout << "FAILED_CHECK_NAME: " << FAILED_CHECK_NAME << std::endl; */\
	/* std::cout << "Check name: " << "failed_check_" file "_" line << std::endl; */\
	assert((condition) && (std::strncmp(FAILED_CHECK_NAME, "failed_check_" file ":" line, 1024) != 0));\
  }\
  while (false)\


void PrintDefineForFaultInjection(const char* filename, const char* lineno) {
	std::cout << "add_compile_definitions(FAILED_CHECK_NAME=\"failed_check_" << filename << ":" << lineno << "\")" << std::endl;
}
