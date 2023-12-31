#pragma once
#include <iostream>
// sweeney's hand-rolled deque class.

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
	int front(node* list, int &data);
	int back(node* list, int &data);
	int push_front(node** list, int data);
	int pop_front(node** list);
	int push_back(node** list, int data);
	int pop_back(node** list);
	int clear(node** list);
	int size(node*, int &nodeCount);
	int isEmpty(node*);
	int print(node* list);
};