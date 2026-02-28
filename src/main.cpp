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

void printForEmpty(bool input);
void stackTestInt();
void stackTestChar();
void queueTestInt();
void queueTestChar();


int main(){


	std::cout << "----- STACK TESTING (w/ INTEGERS) -----" << std::endl;
	stackTestInt();
	/*
	std::cout << "\nTesting stack with chars" << std::endl;
	stackTestChar();

	//For Queue testing
	std::cout << "\nTesting queue with integers" << std::endl;
	queueTestInt();
	std::cout << "\nTesting queue with chars" << std::endl;
	queueTestChar();
	*/

	std::cout << "\nEnd of main" << std::endl;
	
	return 0;
}








void stackTestInt(){
	
	printForEmpty(intStack.isEmpty());
	std::cout << "popping an empty stack..."<<std::endl;
	std::cout << "successful pop?: " << intStack.pop(&intHolder) <<std::endl;
	std::cout << "data written in the attempt: \"" << intHolder << "\"" <<std::endl;

	std::cout << "\npopulating stack..."<<std::endl;
	for(int i = NODE_CNT; i > 0; i--){
		intHolder = i + 0;
		intStack.push(&intHolder);
	}
	printForEmpty(intStack.isEmpty());

	std::cout << "copying the stack..."<<std::endl;
	Stack<int> stkCopy = intStack;

	std::cout << "popping the stack copy...\n" << std::endl;
	for(int i = 0; i < NODE_CNT; i++){
		stkCopy.top(&intHolder);
		std::cout << "Top: " << intHolder;
		stkCopy.pop(&intHolder);
		std::cout << ",  Pop: " << intHolder << std::endl;
	}

	std::cout << "\nthe original stack" << std::endl;
	printForEmpty(intStack.isEmpty());
	std::cout << "the copied stack" << std::endl;
	printForEmpty(stkCopy.isEmpty());

}

void stackTestChar(){
	
	printForEmpty(charStack.isEmpty());

	for(int i = NODE_CNT; i > 0; i--){
		charHolder = i + 107;
		charStack.push(&charHolder);
	}
	printForEmpty(charStack.isEmpty());

	for(int i = 0; i < NODE_CNT; i++){
		charStack.top(&charHolder);
		std::cout << "Top: " << charHolder;
		charStack.pop(&charHolder);
		std::cout << ",  Pop: " << charHolder << std::endl;
	}
	
	printForEmpty(charStack.isEmpty());
	intStack.pop(&intHolder);

}



void queueTestInt(){
	
	printForEmpty(intQueue.isEmpty());

	for(int i = NODE_CNT; i > 0; i--){
		intHolder = i + 0;
		intQueue.insert(&intHolder);
	}
	printForEmpty(intQueue.isEmpty());

	for(int i = 0; i < NODE_CNT; i++){
		intQueue.next(&intHolder);
		std::cout << "Next: " << intHolder;
		intQueue.remove(&intHolder);
		std::cout << ",  Removed: " << intHolder << std::endl;
	}
	
	printForEmpty(intQueue.isEmpty());
	intQueue.remove(&intHolder);

}

void queueTestChar(){
	
	printForEmpty(charQueue.isEmpty());

	for(int i = NODE_CNT; i > 0; i--){
		charHolder = i + 107;
		charQueue.insert(&charHolder);
	}
	printForEmpty(charQueue.isEmpty());

	for(int i = 0; i < NODE_CNT; i++){
		charQueue.next(&charHolder);
		std::cout << "Next: " << charHolder;
		charQueue.remove(&charHolder);
		std::cout << ",  Removed: " << charHolder << std::endl;
	}
	
	printForEmpty(charStack.isEmpty());
	intQueue.remove(&intHolder);

}


void printForEmpty(bool input){
	if(input) std::cout << "   The object is empty\n";
	else{std::cout << "   The object holds data.\n";}
}