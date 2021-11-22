#pragma once
#include "List.h"

class Test
{
public:
    void runTests();
    ~Test() {};
    static Test* getInstance();

    bool checkIfWhenAdd7ToListHeadIs7();
    bool checkIfWhenAdd7ToListTailIs7();
    bool checkIfAddTwoIntToListReturnsCorrectHead();
    bool checkIfAddTwoIntToListReturnsCorrectTail();
    bool checkIfPopingListReturnsCorrectTail();
private:
    Test() {};
    static Test* pointerToObject;


};