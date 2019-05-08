// AssertionCollector.cpp : Defines the entry point for the application.
//

#include "AssertionCollector.h"
#include "Assertions.h"

using namespace std;

void fun1(int arg1, int arg2) {
	ASSERT_XXX(arg1 > arg2);
	ASSERT_XXX(arg1 + arg2 < 100);
	ASSERT_XXX(true);
}


int main()
{
	cout << "Running fun1:\n" << endl;
	fun1(20, 5);
	cout << "\nCompleted fun1!" << endl;
	return 0;
}
