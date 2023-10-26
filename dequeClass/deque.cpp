#include "deque.h"

dNode* deque::init(int data)
{
	dNode* newNode = new dNode();
	newNode->data = data;
	newNode->prev = nullptr;
	newNode->next = nullptr;
	return newNode;
}

int deque::push_front(dNode** list, int data)
{
	if (*list == nullptr)
	{
		*list = this->init(data);
		return 0;
	}
	dNode* head = *list;
	dNode* newNode = new dNode();
	newNode->data = data;
	newNode->prev = nullptr;
	newNode->next = head;
	head->prev = newNode;
	*list = newNode;
	return 0;
}

int deque::pop_front(dNode** list)
{
	if (*list == nullptr) return 1; // list is empty.
	// 
	dNode* head = *list;
	dNode* newHead = head->next;
	newHead->prev = nullptr;
	delete head;
	*list = newHead;
	return 0;
}

int deque::push_back(dNode** list, int data)
{
	// check if list is empty.
	if (*list == nullptr)
	{
		*list = this->init(data);
		return 0;
	}

	dNode* head = *list;
	// find tail node, append new node.
	do {
		dNode* curr = *list;
		if (curr->next == nullptr)
		{
			dNode* newNode = new dNode();
			newNode->data = data;
			curr->next = newNode;
			newNode->prev = curr;
			newNode->next = nullptr;
			*list = head;
			return 0;
		}
		*list = curr->next;
	} while (*list != nullptr);
}

int deque::pop_back(dNode** list)
{
	if (*list == nullptr) return 1; // list is empty.

	dNode* head = *list;
	// find, remove tail node.
	do {
		dNode* curr = *list;
		if (curr->next->next == nullptr)
		{
			dNode* dummy = curr->next;
			curr->next = nullptr;
			delete dummy;
			*list = head;
			return 0;
		}
		*list = curr->next;
	} while (*list != nullptr);
}

int deque::clear(dNode** list)
{
	if (*list == nullptr) return 1; // list is empty.

	do {
		dNode* curr = *list;
		dNode* dummy = curr;
		*list = curr->next;
		delete dummy;
	} while (*list != nullptr);
	return 0;
}

int deque::print(dNode* list)
{
	if (list == nullptr) return 1; // list is empty.

	int tempPos = 0;
	std::cout << "#\tdata:\tcurr:\t\t\tnext:\t\t\tprev:\n";
	do {
		std::cout << tempPos << '\t' << list->data << '\t' << list << '\t' << list->next << '\t' << list->prev << '\n';
		++tempPos;
		list = list->next;
	} while (list != nullptr);
	std::cout << '\n';
	return 0;
}