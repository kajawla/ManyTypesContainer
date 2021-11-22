#include "test.h"
#include "List.h"
#include "Node.h"
#include <iostream>

Test* Test::pointerToObject = nullptr;

void Test::runTests()
{
	if (checkIfWhenAdd7ToListHeadIs7())
	{
		std::cout << "checkIfWhenAdd7ToListHeadIs7 is PASSING \n";
	}
	else
	{
		std::cout << "checkIfWhenAdd7ToListHeadIs7 is FAILLING \n";
	}

	if (checkIfWhenAdd7ToListTailIs7())
	{
		std::cout << "checkIfWhenAdd7ToListTailIs7 is PASSING \n";
	}
	else
	{
		std::cout << "checkIfWhenAdd7ToListTailIs7 is FAILLING \n";
	}

	if (checkIfAddTwoIntToListReturnsCorrectHead())
	{
		std::cout << "checkIfAddTwoIntToListReturnsCorrectHead is PASSING \n";
	}
	else
	{
		std::cout << "checkIfAddTwoIntToListReturnsCorrectHead is FAILLING \n";
	}

	if (checkIfAddTwoIntToListReturnsCorrectTail())
	{
		std::cout << "checkIfAddTwoIntToListReturnsCorrectTail is PASSING \n";
	}
	else
	{
		std::cout << "checkIfAddTwoIntToListReturnsCorrectTail is FAILLING \n";
	}

	if (checkIfPopingListReturnsCorrectTail())
	{
		std::cout << "checkIfPopingListReturnsCorrectTail is PASSING \n";
	}
	else
	{
		std::cout << "checkIfPopingListReturnsCorrectTail is FAILLING \n";
	}

}

bool Test::checkIfWhenAdd7ToListHeadIs7()
{
	List list;
	list.add(7);
	if (list.front() == 7)
	{
		return true;
	}
	return false;
}

bool Test::checkIfWhenAdd7ToListTailIs7()
{
	List list;
	list.add(7);
	if (list.back() == 7)
	{
		return true;
	}
	return false;
}

bool Test::checkIfAddTwoIntToListReturnsCorrectHead()
{
	List list;
	list.add(7);
	list.add(8);
	if (list.front()==7)
	{
		return true;
	}
	return false;
}

bool Test::checkIfAddTwoIntToListReturnsCorrectTail()
{
	List list;
	list.add(7);
	list.add(8);
	if (list.back() == 8)
	{
		return true;
	}
	return false;
}

bool Test::checkIfPopingListReturnsCorrectTail()
{
	List list;
	list.add(7);
	list.add(8);
	list.pop_back();
	if (list.front() == 7)
	{
		return true;
	}
	return false;
}

Test* Test::getInstance()
{
	if (pointerToObject == nullptr)
	{
		pointerToObject = new Test();
	}
	return pointerToObject;
}