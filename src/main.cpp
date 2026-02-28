#include <iostream>
// #include"stack.h"
#include "queue.h"

// void testStacks();
void testQueues();

int main(){

//	testStacks();
	std::cout << std::endl;
//	testQueues();
	
	//End
	std::cout << "\nEnd of main" << std::endl;
	return 0;
}


/*
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


--------------------------------------------------------------

void testQueues(){
	const int nodeCount = 10;
	int intHolder;
	char charHolder;

	Queue<int> intQueue;
	Queue<char> charQueue;

	for(int i = nodeCount; i > 0; i--){
		//Stack Loading
		intQueue.insert(i);
		charQueue.insert(107-i);
	}

	//Removals
	while( ! intQueue.isEmpty()){
		intQueue.next(&intHolder);
		std::cout << "Next: " << intHolder;
		intQueue.remove(&intHolder);
		std::cout << ",  Removed: " << intHolder << std::endl;
	}
	
	std::cout << std::endl;

	while( ! charQueue.isEmpty()){
		charQueue.next(&charHolder);
		std::cout << "Next: " << charHolder;
		charQueue.remove(&charHolder);
		std::cout << ",  Removed: " << charHolder << std::endl;
	}		
}
*/