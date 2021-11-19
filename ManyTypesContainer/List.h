#pragma once
#include "Node.h"


class List
{
	Node* head;
	Node* tail;
	int size;


public:
	Node* add(int value);
};