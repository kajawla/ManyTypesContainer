#include "Node.h"

int Node::getVaule()
{
	return value;
}

void Node::setNextNode(Node* next )
{
	nextNode = next;
}
void Node::setPreviousNode(Node* previous)
{
	previousNode = previous;
}

Node* Node::getPreviousNode()
{
	return previousNode;
}