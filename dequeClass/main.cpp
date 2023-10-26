#include <iostream>
#include "deque.h"

int main()
{
	std::cout << "Deque Class v1.1.0\n\n";

	node* list = nullptr;
	int result;
	deque dq;

	for (int i = 0; i < 9; i++)
	{
		dq.push_back(&list, pow(i, 5));
	}
	result = dq.print(list);
	if (result == 1)
	{
		std::cout << "List is empty.\n";
	}
	/// test code here: ////////////////////////////////////////
	
	std::cout << "result: " << result << "\n\n";
	////////////////////////////////////////////////////////////
	result = dq.print(list);
	if (result == 1)
	{
		std::cout << "List is empty.\n";
	}

}