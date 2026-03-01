/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: This is ADT Tester of the project.
*
************************************************* */
#include <iostream>
#include <string>
#include "stack.h"
#include "queue.h"

template<typename T>
class Test : public Stack<T>, public Queue<T> {
    private:
		const int MAX_ENTRIES = 5;
		int count;
		Stack<T> stack;
		Queue<T> queue;

    public:
		Test() : count(0){
			if(stack.isEmpty()){ std::cout << "The stack is ready for input." << std::endl;}
			else { std::cout << "Error: The stack is not empty." << std::endl;}
			if(stack.isEmpty()){ std::cout << "The queue is ready for input." << std::endl;}
			else { std::cout << "Error: The queue is not empty." << std::endl; }
			std::cout << "\n   This test will test the stack/queue using strings.\n";
			std::cout << "   You will be prompted for "<< MAX_ENTRIES << " entries,\n";
			std::cout << "   And all will print out at the end.\n" << std::endl;
		}

		bool StoreData();
		void printOut();
		void runTest();

};

template<typename T> bool Test<T>::StoreData(){
/* **********************************
 * Converts the boolean 0 and 1 to string outputs.
 *
 * @param bool input : used to communicate if ADTs are empty
 * @return    (void) : no return
 * @exception     na : na
 * @note
 * **********************************/
	T userInput;

	std::cout << " Enter a string to add to the ADTs.   ";
	std::cin >> userInput;
	return (stack.push(&userInput) && queue.insert(&userInput));
}

template<typename T> void Test<T>::printOut(){
	T strBuffer;

	std::cout << "\n-----------------------------" << std::endl;
	std::cout << "Queue: ";
	while ( ! queue.isEmpty() ){
		queue.remove(&strBuffer);
		std::cout << "[" << strBuffer<< "]";
	}

	std::cout << std::endl;
	std::cout << "Stack: ";
	while ( ! stack.isEmpty() ){
		stack.pop(&strBuffer);
		std::cout << "[" << strBuffer<< "]";
	}
}

template<typename T> void Test<T>::runTest (){
	for (int i = 0; i < MAX_ENTRIES; i++){ Test<T>::StoreData(); }
	Test<T>::printOut();
}


int main(){
/* *******************************************************************************************************************************
 * This function is the application driver. It tests the stack ADT with integers and
 * then with chars. It then tests the queue ADT with integers and then chars as well.
 * vehicle instances stored in memory.
 *
 * @param na : na
 * @return (int) : application exit code 0
 * @exception na : na
 * @note na
 * *******************************************************************************************************************************/
	Test<std::string> tester1;
	tester1.runTest();
    return 0;
}
