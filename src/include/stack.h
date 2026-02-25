template <typename T>
struct SNode {
    T data;
    SNode<T>* next;
};

template <typename T>
class Stack {
	private:
	    SNode<T> head;
	    unsigned short cnt = 0;
	
	public:
		Stack();		
		~Stack();
		
		bool isEmpty();
		bool push(T);
		SNode<T> top();
		SNode<T> pop();

};
