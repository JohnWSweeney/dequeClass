#pragma once
#include <iostream>
// doubly linked list node.
struct dNode
{
	int data;
	dNode* prev;
	dNode* next;
};

class deque
{
private:
	dNode* init(int data);
public:
	int push_front(dNode** list, int data);
	int pop_front(dNode** list);
	int push_back(dNode** list, int data);
	int pop_back(dNode** list);
	int clear(dNode** list);
	int print(dNode* list);
};