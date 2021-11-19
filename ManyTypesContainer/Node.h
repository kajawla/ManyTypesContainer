#pragma once

class Node {

	Node* nextNode;
	Node* previousNode;
	int value;

public:
	Node* getNextNode();
	Node* getPreviousNode();
	Node* setNextNode();
};