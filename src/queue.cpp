#include "queue.h"

	Queue::Queue(){
		std::cout << "printed from Queue" << std::endl;
	}

	Queue::~Queue(){}
	bool Queue::insert(){return true;}
	bool Queue::remove(){return true;}
	int Queue::next(){return 0;}  // needs to be template'd
	bool Queue::isEmpty(){return true;}