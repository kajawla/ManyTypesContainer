#include <iostream>
#include "test.h"

int main()
{

	Test* tests = Test::getInstance();
	tests->runTests();
}

