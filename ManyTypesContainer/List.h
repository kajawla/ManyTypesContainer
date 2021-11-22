#pragma once
#include "Node.h"

class List
{
	Node* head;
	Node* tail;
	int size_=0;


public:
	void add(int value);
	int front();
	int back();
	void pop_back();
	int size();
};