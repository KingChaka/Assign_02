#include <iostream>
#include"stack.h"
// #include "queue.h"

int main(){

	Stack<int> toyStack;

	toyStack.push(5);
	std::cout << toyStack.top() << std::endl;	
	toyStack.push(4);
	std::cout << toyStack.top() << std::endl;
	std::cout << "end of main" << std::endl;
	return 0;
}