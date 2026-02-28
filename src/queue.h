/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The class for the stack.
*
************************************************* */

#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.h"

template <typename T>
class Queue : public SNode<T> {
	private:
		LinerSinglyLinkedList<T> qlist;

	public:
		Queue() { }
		~Queue(){ qlist.deleteList(); }

		bool isEmpty(){	return qlist.isEmptyList(); }
		
		bool insert(T * nodeData){ return qlist.insertElmAtEnd(nodeData); }

		bool remove(T * nodeData){ return qlist.removefromFront(nodeData); }

		bool next(T * nodeData){ return qlist.nextElm(nodeData);}
		
};

#endif  // QUEUE_H