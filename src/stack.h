/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The class for the stack.
*
************************************************* */

#ifndef STACK_H
#define STACK_H

template <typename T>
struct SNode {
    T data;
    SNode<T>* next = NULL;
};

template <typename T>
class Stack {
	private:
	    SNode<T> * head;
	    unsigned short cnt;
	
	public:
	    // Constructor & Destructor
		Stack() : head(NULL), cnt(0) {}
		~Stack<T>(){
			SNode<T> * currentNode = head;
			SNode<T> * previousNode = head;
		    while(cnt > 0) {		        
				currentNode = head;
				while(currentNode->next != NULL){
		        	previousNode = currentNode;
					currentNode = currentNode->next;
		    		}
				previousNode->next = NULL;
		        delete currentNode;
				cnt--;
		    }
		}
		
		
		bool isEmpty(){
		    return cnt == 0;
		    }
		
		
		bool push(T nodeData){
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
		
		
		void top(T * dataSpace){
			SNode<T> * currentNode = head;
		    while(currentNode->next != NULL){
		        currentNode = currentNode->next;
		    }
		    *dataSpace = currentNode->data;
		        
		}
		
		
		void pop(T * dataSpace){
			SNode<T> * currentNode = head;
			SNode<T> * previousNode = head;
		    
			while(currentNode->next != NULL){
		        previousNode = currentNode;
				currentNode = currentNode->next;
		    }
			
			*dataSpace = currentNode->data;
			previousNode->next = NULL;
			delete currentNode;
			currentNode = NULL;
			cnt--;
		}

};

#endif // STACK_H