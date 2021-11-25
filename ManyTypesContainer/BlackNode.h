#pragma once
#include "Node.h"

class BlackNode : public Node
{
private:
	Node* nextNode = nullptr;
	Node* previousNode = nullptr;
	int value = 0;
	char type = 'b';
public:
	BlackNode() {};
	BlackNode(int v): value(v) {};
	~BlackNode() {} ;
	Node* getNextNode() override;
	Node* getPreviousNode() override;
	void setNextNode(Node* next) override;
	void setPreviousNode(Node* previous) override;
	int getValue() override;
	char getType() override;
};