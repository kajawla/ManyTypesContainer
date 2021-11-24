#include "test.h"
#include "List.h"
#include "Node.h"
#include <iostream>

Test* Test::pointerToObject = nullptr;

void Test::runTests()
{/*
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

	if (checkIfReturnsCorrectSize())
	{
		std::cout << "checkIfReturnsCorrectSize is PASSING \n";
	}
	else
	{
		std::cout << "checkIfReturnsCorrectSize is FAILING \n";
	}

	if (checkIfAfterPopingAndAddingReturnsCorrectSize())
	{
		std::cout << "checkIfAfterPopingAndAddingReturnsCorrectSize is PASSING \n";
	}
	else
	{
		std::cout<< "checkIfAfterPopingAndAddingReturnsCorrectSize is FAILING \n";
	}

	if (checkIfUsedFrontReturnsNullptr())
	{
		std::cout << "checkIfUsedFrontReturnsNullptr is PASSING \n";
	}
	else
	{
		std::cout << "checkIfUsedFrontReturnsNullptr is FAILING \n";
	}

	if (checkIfGivenRedNodeAndBlackNodeListSizeEQTwo())
	{
		std::cout << "checkIfGivenRedNodeAndBlackNodeListSizeEQTwo is PASSING \n";
	}
	else
	{
		std::cout << "checkIfGivenRedNodeAndBlackNodeListSizeEQTwo is FAILING \n";
	}
	*/
	if (checkIfGivenRedNodeStoresRedNode())
	{
		std::cout << "checkIfGivenRedNodeStoresRedNode is PASSING \n";
	}
	else
	{
		std::cout << "checkIfGivenRedNodeStoresRedNode is FAILING \n";
	}

	if (checkIfWhenGivenRedNodeGetFrontTypeReturnsCorrectType())
	{
		std::cout << "checkIfWhenGivenRedNodeGetFrontTypeReturnsCorrectType is PASSING \n";
	}
	else
	{
		std::cout << "checkIfWhenGivenRedNodeGetFrontTypeReturnsCorrectType is FAILING \n";
	}

	if (checkIfGivenBlackAndRedSortsCorrectly())
	{
		std::cout << "checkIfGivenBlackAndRedSortsCorrectly is PASSING \n";
	}
	else
	{
		std::cout << "checkIfGivenBlackAndRedSortsCorrectly is FAILING \n";
	}

	if (checkIfGivenBlackRedBlackSortsCorrectly())
	{
		std::cout << "checkIfGivenBlackRedBlackSortsCorrectly() is PASSING \n";
	}
	else
	{
		std::cout << "checkIfGivenBlackRedBlackSortsCorrectly() is FAILING \n";
	}

	if (checkIfGivenkRedBlackRedSortsCorrectly())
	{
		std::cout << "checkIfGivenkRedBlackRedSortsCorrectly is PASSING \n";
	}
	else
	{
		std::cout << "checkIfGivenkRedBlackRedSortsCorrectly is FAILING \n";
	}
}

bool Test::checkIfGivenkRedBlackRedSortsCorrectly()
{
	List list;
	list.addRed(1);
	list.addBlack(2);
	list.addRed(3);
	list.sort();
	
	if (list.getFrontType() == 'r' & list.back() == 2)
	{
		return true;
	}
	return false;
}

bool Test::checkIfGivenBlackRedBlackSortsCorrectly()
{
	List list;
	list.addBlack(1);
	list.addRed(2);
	list.addBlack(3);
	list.sort();
	
	if (list.getFrontType() == 'r' & list.back()==1)
	{
		return true;
	}
	return false;
}

bool Test::checkIfGivenBlackAndRedSortsCorrectly()
{
	List list;
	list.addBlack(1);
	list.addRed(2);
	list.sort();
	
	if (list.getFrontType() == 'r')
	{
		return true;
	}
	return false;
}

bool Test::checkIfWhenGivenRedNodeGetFrontTypeReturnsCorrectType()
{
	List list;
	list.addRed(1);
	
	if (list.getFrontType() == 'r')
	{
		return true;
	}
	return false;
}

bool Test::checkIfGivenRedNodeStoresRedNode()
{
	List list;
	list.addRed(1);
	list.addBlack(2);
	if (list.front() == 1
		&& list.back() == 2
		&& list.size() == 2)
	{
		return true;
	}
	return false;
}
/*
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
	if (list.back() == 7)
	{
		return true;
	}
	return false;
}

bool Test::checkIfReturnsCorrectSize()
{
	List list;
	list.add(1);
	list.add(2);
	list.add(3);
	if (list.size() == 3)
	{
		return true;
	}
	return false;
}

bool Test::checkIfAfterPopingAndAddingReturnsCorrectSize()
{
	List list;
	list.add(1);
	list.add(2);
	list.add(3);
	list.pop_back();
	if (list.size() == 2)
	{
		return true;
	}
	return false;
}

bool Test::checkIfUsedFrontReturnsNullptr()
{
	List list;

	if (list.front()==0)
	{
		return true;
	}
	return false;
}
bool Test::checkIfGivenRedNodeAndBlackNodeListSizeEQTwo()
{
	List list;
	list.add(1);
	list.add(2);
	if (list.size() == 2)
	{
		return true;
	}
	return false;
}
*/
Test* Test::getInstance()
{
	if (pointerToObject == nullptr)
	{
		pointerToObject = new Test();
	}
	return pointerToObject;
}