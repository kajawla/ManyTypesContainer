#pragma once
#include "Node.h"

class RedNode : public Node
{
private:
	Node* nextNode = nullptr;
	Node* previousNode = nullptr;
	int value = 0;
	char type = 'r';
public:
	RedNode(int v) : value(v) {};
	~RedNode() {};
	virtual Node* getNextNode() override;
	Node* getPreviousNode();
	void setNextNode(Node* next);
	void setPreviousNode(Node* previous);
	int getValue();
	char getType();


};