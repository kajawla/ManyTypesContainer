#pragma once

class Node {

	Node* nextNode;
	Node* previousNode;
	int value;

public:
	Node(int v) :value(v) {};

	Node* getNextNode();
	Node* getPreviousNode();
	void setNextNode(Node* next);
	void setPreviousNode(Node* previous);
	int getVaule();
};