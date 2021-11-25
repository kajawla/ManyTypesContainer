#include "RedNode.h"

int RedNode::getValue()
{
	return value;
}

void RedNode::setNextNode(Node* next)
{
	nextNode = next;
}

void RedNode::setPreviousNode(Node* previous)
{
	previousNode = previous;
}

Node* RedNode::getPreviousNode()
{
	return previousNode;
}

char RedNode::getType()
{
	return type;
}

Node* RedNode::getNextNode()
{
	return nextNode;
}