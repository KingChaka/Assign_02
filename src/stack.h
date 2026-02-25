
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
		Stack(){
		    head = NULL;
	        cnt = 0;
	    }
	    
		~Stack<T>(){
		    while(cnt > 0) {
		        SNode<T> * currentNode = head;
		        for(unsigned short i=0; i < cnt; i++){
		            currentNode = currentNode->next;
		        }
		        delete currentNode;
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
	        currentNode->next = nodePtr;
	        
	        //Append the new Node to end of stack
		    for(unsigned short i=0; i < cnt; i++){
		        currentNode = currentNode->next;
		    }
		    cnt++;
		    isPushed = true;
		    
		    //Success or Fail Indication
	        return isPushed;	
		}
		
		
		T top(){
		    unsigned short location = cnt;
		    T * currentNode = head;
		    for(unsigned short i=0; i < cnt; i++){
		        currentNode = currentNode->next;
		    }
		    return currentNode->data;
		        
		}
		
		
		T pop(){
		    unsigned short location = cnt;
		    T * currentNode = head;
		    for(unsigned short i=0; i < cnt; i++){
		        currentNode = currentNode->next;
		    }
		    return currentNode->data;
		    
		}

};

