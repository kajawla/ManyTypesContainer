#pragma once

class Node
{
private:
	Node* nextNode;
	Node* previousNode;
	int value;


public:
	Node* nextNode;
	Node* previousNode;
	int value;
	char type;

public:
	virtual Node* getPreviousNode() = 0;
	virtual void setNextNode(Node* next) = 0;
	virtual void setPreviousNode(Node* previous) = 0;
	virtual int getValue() = 0;
	virtual char getType() = 0;
	virtual Node* getNextNode() = 0;


};