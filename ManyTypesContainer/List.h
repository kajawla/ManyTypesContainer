#pragma once
#include "Node.h"
#include "BlackNode.h"
#include "RedNode.h"
#include <iostream>

class List
{
private:
	Node* head = nullptr;
	Node* tail = nullptr;
	int size_=0;
	

public:
	void addBlack(int value);
	void addRed(int value);

	int front();
	int back();
	void pop_back();
	int size();
	char getFrontType();
	void sort();

};