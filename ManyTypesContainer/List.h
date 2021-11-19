#pragma once
#include "Node.h"


class List
{
	Node* head;
	Node* tail;
	int size=0;


public:
	Node* add(int value);
};