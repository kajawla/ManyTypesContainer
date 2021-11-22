#include "List.h"

void List::add(int value)
{

	Node* wokrikngNode = new Node(value);
	if (size_ == 0)
	{
		head = wokrikngNode;
		tail = wokrikngNode;
		head->setNextNode(tail);
		tail->setPreviousNode(head);
	}
	else
	tail->setNextNode(wokrikngNode);
	wokrikngNode->setPreviousNode(tail);
	tail = wokrikngNode;
	size_++;
}

int List::front()
{
	return head->getVaule();
}

int List::back()
{
	return tail->getVaule();
}

void List::pop_back()
{
	tail = tail->getPreviousNode();
	size_--;
}

int List::size()
{
	return size_;
}