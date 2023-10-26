#pragma once
#include <iostream>
// singly linked list node.
struct node
{
	int data;
	node* next;
};

class deque
{
private:
	node* init(int data);
public:
	int push_front(node** list, int data);
	int pop_front(node** list);
	int push_back(node** list, int data);
	int pop_back(node** list);
	int clear(node** list);
	int print(node* list);
};