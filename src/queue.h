/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The class for the stack.
*
************************************************* */

#ifndef QUEUE_H
#define QUEUE_H

#include "linkedList.h"

/*template <typename T>
struct SNode {
    T data;
    SNode<T>* next = NULL;
};*/

template <typename T>
class Queue : public SNode<T> {
	private:
		SNode<T> * head;
	    unsigned short cnt;

	public:
		Queue() : head(NULL) , cnt(0) { }
		~Queue(){
			SNode<T> * currentNode;
			SNode<T> * nextNode;
			while(head != NULL){
				currentNode = head;
				nextNode = head->next;				
				head = nextNode;
				delete currentNode;
				currentNode = NULL;
			}
		}
	/*	
		bool insert(T nodeData){
			bool isPushed = false;
	        SNode<T> * currentNode = head;
	        
	        // create and update the new Node
	        SNode<T> * nodePtr = new SNode<T>;
			nodePtr->data = nodeData;	
	        
	        
	        //Append the new Node to end of stack
			if(head == NULL){
				head = nodePtr;
			}
			else {
				while(currentNode->next != NULL){
		        	currentNode = currentNode->next;
		    	}
				currentNode->next = nodePtr;
			}
		    cnt++;
		    isPushed = true;
		    
		    //Success or Fail Indication
	        return isPushed;	
		}

		bool remove(T * dataSpace){
			SNode<T> * currentNode = head;	
			*dataSpace = currentNode->data;  // write data
			head = currentNode->next;
			delete currentNode;
			currentNode = NULL;
			cnt--;
			return true;
		}

		bool next(T * dataSpace){
			*dataSpace = head->data;
			return true;
		}		

		bool isEmpty(){
		    return cnt == 0;
			return true;
		}
	*/
};


#endif  // QUEUE_H