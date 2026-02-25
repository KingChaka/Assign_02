#include <iostream>
#include "stack.h"

	Stack::Stack(){
		head->next = NULL; 
	}
	
	Stack::~Stack(){
		// Nothing
	}
	
	template<typename T>
	bool Stack::push(T newNode){
		bool isPushed = false;
		SNode<T> * = new SNode<T>;
		return isPushed;
		
	}
	
	template<typename T>
	SNode<T> Stack::pop(){return 0;}
	
	template<typename T>
	SNode<T> Stack::top(){return 0;}
	
	
	bool Stack::isEmpty(){
		bool isConfirmed = false;
		if(Stack::cnt < 1) isConfirmed = true;
		return isConfirmed;
	}

