#include "deque.h"

node* deque::init(int data)
{
	node* newNode = new node();
	newNode->data = data;
	newNode->next = nullptr;
	return newNode;
}

int deque::push_front(node** list, int data)
{
	if (*list == nullptr)
	{
		*list = this->init(data);
		return 0;
	}
	node* head = *list;
	node* newNode = new node();
	newNode->data = data;
	newNode->next = head;
	*list = newNode;
	return 0;
}

int deque::pop_front(node** list)
{
	if (*list == nullptr) return 1; // list is empty.
	// 
	node* head = *list;
	node* newHead = head->next;
	delete head;
	*list = newHead;
	return 0;
}

int deque::push_back(node** list, int data)
{
	// check if list is empty.
	if (*list == nullptr)
	{
		*list = this->init(data);
		return 0;
	}

	node* head = *list;
	// find tail node, append new node.
	do {
		node* curr = *list;
		if (curr->next == nullptr)
		{
			node* newNode = new node();
			newNode->data = data;
			curr->next = newNode;
			newNode->next = nullptr;
			*list = head;
			return 0;
		}
		*list = curr->next;
	} while (*list != nullptr);
}

int deque::pop_back(node** list)
{
	if (*list == nullptr) return 1; // list is empty.

	node* head = *list;
	// find, remove tail node.
	do {
		node* curr = *list;
		if (curr->next->next == nullptr)
		{
			node* dummy = curr->next;
			curr->next = nullptr;
			delete dummy;
			*list = head;
			return 0;
		}
		*list = curr->next;
	} while (*list != nullptr);
}

int deque::clear(node** list)
{
	if (*list == nullptr) return 1; // list is empty.

	do {
		node* curr = *list;
		node* dummy = curr;
		*list = curr->next;
		delete dummy;
	} while (*list != nullptr);
	return 0;
}

int deque::print(node* list)
{
	if (list == nullptr) return 1; // list is empty.

	int tempPos = 0;
	std::cout << "#\tdata:\tcurr:\t\t\tnext:\n";
	do {
		std::cout << tempPos << '\t' << list->data << '\t' << list << '\t' << list->next << '\n';
		++tempPos;
		list = list->next;
	} while (list != nullptr);
	std::cout << '\n';
	return 0;
}