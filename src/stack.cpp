#include <iostream>
#include "stack.h"

	Stack::Stack(){
		std::cout << "-->stack constructor" << std::endl; 
	}
	
	Stack::~Stack(){
		std::cout << "-->stack destructor" << std::endl; 
	}
	
	bool Stack::push(){ //needs argument for data pointer
		bool isDone = false;
		// code here
		return isDone;
		
	}
	
	int Stack::pop(){return 0;}
	
	int Stack::top(){return 0;}
	
	bool Stack::isEmpty(){
		bool isConfirmed = true;
		// code here
		return isConfirmed;
	}