/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The class for the stack.
*
************************************************* */

#include "linkedList.h"

#ifndef STACK_H
#define STACK_H

template <typename T>
class Stack : SNode<T>{
	private:
	    LinerSinglyLinkedList<T> stkList;
	
	public:
	    // Constructor & Destructor
		Stack() : stkList() {}
		~Stack<T>(){ stkList.deleteList(); }
		
		bool isEmpty(){ return stkList.isEmptyList(); }
		
		bool push(T * nodeData){ return stkList.addElmAtFront(nodeData); }
		
		bool top(T * nodeData){return stkList.nextElm(nodeData);}
		
		bool pop(T * nodeData){ return stkList.removefromFront(nodeData); }

};

#endif // STACK_H