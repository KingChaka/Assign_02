#include <iostream>

class Queue {
	public:
		Queue();
		~Queue();
		
		bool insert();
		bool remove();
		int next();  // needs to be template'd
		bool isEmpty();
	
	private:
		// data type defined here
};
