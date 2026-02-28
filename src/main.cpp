#include <iostream>
#include"stack.h"
#include "queue.h"

const int NODE_CNT = 5;

int intHolder;
char charHolder;

Stack<int> intStack;
Stack<char> charStack;
Queue<int> intQueue;
Queue<char> charQueue;

void testStacks();
void testQueues();
void printForEmpty(bool input);

int main(){

	testStacks();
	std::cout << std::endl;
	
	testQueues();

	std::cout << "\nEnd of main" << std::endl;
	
	return 0;
}

void testStacks(){
	printForEmpty(intStack.isEmpty());
	printForEmpty(charStack.isEmpty());

	for(int i = NODE_CNT; i > 0; i--){
		//Stack Loading
		intStack.push(&i);
		char ascii = 107 + i;
		charStack.push(&ascii);
	}

	printForEmpty(intStack.isEmpty());
	printForEmpty(charStack.isEmpty());

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


void testQueues(){
	std::cout << "Empty? " << intQueue.isEmpty() << std::endl;
	intQueue.insert(&intHolder);
	std::cout << "Empty? " << intQueue.isEmpty() << std::endl;
	intQueue.next(&intHolder);
	std::cout << "Next: " << intHolder << std::endl;
	intQueue.remove(&intHolder);
	std::cout << "Empty? " << intQueue.isEmpty() << std::endl;

}


void printForEmpty(bool input){
	if(input) std::cout << "The object is empty\n";
	else{std::cout << "The object holds data.\n";}
}