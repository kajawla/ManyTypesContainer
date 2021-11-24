<<<<<<< HEAD
#include "List.h"
=======
#include "List.h"
/*
void List::add(int value)
{
	Node* wokrikngNode = new Node(value);
	if (size_ == 0)
	{
		head = wokrikngNode;
		tail = wokrikngNode;
		head->setNextNode(tail);
		tail->setPreviousNode(head);
		size_++;
	}
	else
	{
		tail->setNextNode(wokrikngNode);
		wokrikngNode->setPreviousNode(tail);
		tail = wokrikngNode;
		size_++;
	}
}
*/
int List::front()
{
	if(head)
	{
		return head->getValue();
	}
	return 0;
}

int List::back()
{
	if(tail)
	{
		return tail->getValue();
	}
	return 0;
}

void List::pop_back()
{
	Node* temporaryHandler = tail;
	tail = tail->getPreviousNode();
	tail->setNextNode(nullptr);
	size_--;
	delete temporaryHandler;
}

int List::size()
{
	return size_;
}

void List::addBlack(int value)
{
	BlackNode* node = new BlackNode(value);
	if (size_ == 0)
	{
		head = node;
		tail = node;
		head->setNextNode(tail);
		tail->setPreviousNode(head);
		size_++;
	}
	else
	{
		tail->setNextNode(node);
		node->setPreviousNode(tail);
		tail = node;
		size_++;
	}
}

void List::addRed(int value)
{
	RedNode* node = new RedNode(value);
	if (size_ == 0)
	{
		head = node;
		tail = node;
		head->setNextNode(tail);
		tail->setPreviousNode(head);
		size_++;
	}
	else
	{
		tail->setNextNode(node);
		node->setPreviousNode(tail);
		tail = node;
		size_++;
	}
}

char List::getFrontType()
{
	return head->getType();
}

void List::sort()
{
	Node* workingNode = head;
	Node* handlerNode;
	for(int i=0;i<size_-1;i++)
	{
		if (workingNode->getType() == 'b' && workingNode == head)
		{
			head = workingNode->getNextNode();
			tail->setNextNode(workingNode);
			workingNode->getPreviousNode()->setNextNode(workingNode->getNextNode());
			workingNode->getNextNode()->setPreviousNode(workingNode->getPreviousNode());
			workingNode->setPreviousNode(tail);
			tail = workingNode;
			workingNode = workingNode->getNextNode();
			tail->setNextNode(nullptr);
		}
		else if (workingNode->getType() == 'b')
		{
			tail->setNextNode(workingNode);
			workingNode->getPreviousNode()->setNextNode(workingNode->getNextNode());
			workingNode->getNextNode()->setPreviousNode(workingNode->getPreviousNode());
			workingNode->setPreviousNode(tail);
			tail = workingNode;
			workingNode = workingNode->getNextNode();
			tail->setNextNode(nullptr);
		}
		else
		{
			workingNode = workingNode->getNextNode();
		}
	}
}
>>>>>>> master
