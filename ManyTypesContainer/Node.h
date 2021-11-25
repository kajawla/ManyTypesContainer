#pragma once

class Node
{
private:
	Node* nextNode = nullptr;
	Node* previousNode = nullptr;
	int value = 0;

public:
	Node() {};
	Node(int value) : value(value) {};
	virtual ~Node() {};
	virtual Node* getPreviousNode() = 0;
	virtual void setNextNode(Node* next) = 0;
	virtual void setPreviousNode(Node* previous) = 0;
	virtual int getValue() = 0;
	virtual char getType() = 0;
	virtual Node* getNextNode() = 0;


};