#include "BlackNode.h"

int BlackNode::getValue()
{
	return value;
}

void BlackNode::setNextNode(Node* next)
{
	nextNode = next;
}
void BlackNode::setPreviousNode(Node* previous)
{
	previousNode = previous;
}

Node* BlackNode::getPreviousNode()
{
	return previousNode;
}

char BlackNode::getType()
{
	return type;
}

Node* BlackNode::getNextNode()
{
	return nextNode;
}