#include <iostream>
#include"stack.h"
// #include "queue.h"

int main(){

	Stack<int> toyStack;
	int dataholder;

	//Additions
	toyStack.push(5);
	toyStack.push(4);
	toyStack.push(3);
	toyStack.push(2);

	//Removals
	while( ! toyStack.isEmpty()){
		toyStack.top(&dataholder);
		std::cout << "Top: " << dataholder;
		toyStack.pop(&dataholder);
		std::cout << ",  Pop: " << dataholder << std::endl;
	}

	
	//End
	std::cout << "end of main" << std::endl;
	return 0;
}