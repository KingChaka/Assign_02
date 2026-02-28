#include <iostream>
#include"stack.h"
#include "queue.h"

void testStacks();

int main(){

	testStacks();
	
	//End
	std::cout << "\nEnd of main" << std::endl;
	return 0;
}



void testStacks(){
	const int nodeCount = 10;
	int intHolder;
	char charHolder;

	Stack<int> intStack;
	Stack<char> charStack;

	for(int i = nodeCount; i > 0; i--){
		//Stack Loading
		intStack.push(i);
		charStack.push(107-i);
	}

	//Removals
	while( ! intStack.isEmpty()){
		intStack.top(&intHolder);
		std::cout << "Top: " << intHolder;
		intStack.pop(&intHolder);
		std::cout << ",  Pop: " << intHolder << std::endl;
	}
	
	std::cout << std::endl;

	while( ! charStack.isEmpty()){
		charStack.top(&charHolder);
		std::cout << "Top: " << charHolder;
		charStack.pop(&charHolder);
		std::cout << ",  Pop: " << charHolder << std::endl;
	}		
}