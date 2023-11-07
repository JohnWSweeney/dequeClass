#include <iostream>
#include "deque.h"
// sweeney's hand-rolled deque class.
int main()
{
	std::cout << "Deque Class v1.1.2\n\n";

	node* list = nullptr;
	int result;
	int data;
	int nodeCount;
	deque dq;

	for (int i = 0; i < 1; i++)
	{
		dq.push_back(&list, pow(i, 5));
	}
	result = dq.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		dq.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = dq.size(list, nodeCount);
	if (result == 0)
	{
		std::cout << "Node count: " << nodeCount << '\n';
		dq.print(list);
	}
	else if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
}