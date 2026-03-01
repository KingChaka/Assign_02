/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: This is ADT Tester of the project.
*
************************************************* */
#include <iostream>
#include"stack.h"
#include "queue.h"


const int NODE_CNT = 5;

void printForEmpty(bool input){
/* **********************************
 * Converts the boolean 0 and 1 to string outputs.
 *
 * @param bool input : used to communicate if ADTs are empty
 * @return    (void) : no return
 * @exception     na : na
 * @note
 * **********************************/
    if(input) std::cout << "   The object is empty\n";
    else{std::cout << "   The object holds data.\n";}
}

//TEMPLATES FOR EACH ADT TEST
template<typename T>
void stackTester(){
/* **********************************
 * This function is tests if stack is empty and what happens when trying to pop an empty
 * stack. It then fills the stack, copies it, and completely depops the copy.
 * It finishes by testing if both stack are empty.
 *
 * @param      na : na
 * @return (void) : no return
 * @exception  na : na
 * @note            designed for numerical and char datatypes
 * **********************************/
    Stack<T> testStack;
    T dataHolder;

    printForEmpty(testStack.isEmpty());
    std::cout << "popping an empty stack..."<<std::endl;
    std::cout << "successful pop?: " << testStack.pop(&dataHolder) <<std::endl;             // test pop of empty stack
    std::cout << "data written in the attempt: \"" << dataHolder << "\"" <<std::endl;       // make sure no data copied

    std::cout << "\npopulating stack..."<<std::endl;
    for(int i = NODE_CNT; i > 0; i--){                                                      // push data onto the stack
        dataHolder = i + 64;
        testStack.push(&dataHolder);
    }
    printForEmpty(testStack.isEmpty());

    std::cout << "copying the stack..."<<std::endl;
    Stack<T> queCopy = testStack;                                                           // copy the stack

    std::cout << "popping the stack copy...\n" << std::endl;
    for(int i = 0; i < NODE_CNT; i++){                                                      // empty the 2nd stack
        queCopy.top(&dataHolder);
        std::cout << "Top: " << dataHolder;
        queCopy.pop(&dataHolder);
        std::cout << ",  Pop: " << dataHolder << std::endl;
    }

    std::cout << "\nthe original stack" << std::endl;
    printForEmpty(testStack.isEmpty());                                                     // check that first stack not empty
    std::cout << "the copied stack" << std::endl;
    printForEmpty(queCopy.isEmpty());                                                       // check that 2nd stack is empty
}

template<typename T>
void queueTester(){
/* **********************************
 * This function is tests if queue is empty and what happens when trying to remove from
 * the empty queue. It then fills the queue, copies it, and completely depops the copy.
 * It finishes by testing if both queues are empty.
 *
 * @param      na : na
 * @return (void) : no return
 * @exception  na : na
 * @note            designed for numerical and char datatypes
 * **********************************/
    Queue<T> testQueue;
    T dataHolder;

    printForEmpty(testQueue.isEmpty());
    std::cout << "removing from an empty queue..."<<std::endl;
    std::cout << "successful removal?: " << testQueue.remove(&dataHolder) <<std::endl;      // test removal of empty queue
    std::cout << "data written in the attempt: \"" << dataHolder << "\"" <<std::endl;

    std::cout << "\npopulating queue..."<<std::endl;
    for(int i = NODE_CNT; i > 0; i--){                                                      // filling queue
        dataHolder = i + 64;
        testQueue.insert(&dataHolder);
    }
    printForEmpty(testQueue.isEmpty());

    std::cout << "copying the queue..."<<std::endl;
    Queue<T> queCopy = testQueue;                                                           // copying queue

    std::cout << "removing from the copied queue...\n" << std::endl;
    for(int i = 0; i < NODE_CNT; i++){                                                      // emptying 2nd queue
        queCopy.next(&dataHolder);
        std::cout << "Next: " << dataHolder;
        queCopy.remove(&dataHolder);
        std::cout << ",  Removed: " << dataHolder << std::endl;
    }

    std::cout << "\nthe original queue" << std::endl;
    printForEmpty(testQueue.isEmpty());                                                     // make sure 1st queue not empty
    std::cout << "the copied queue" << std::endl;
    printForEmpty(queCopy.isEmpty());                                                       // make sure 2nd queue is empty
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
    std::cout << "-------------------------------------------------------------------- STACK TESTING (w/ INTEGERS)" << std::endl;
    stackTester<int>();
    std::cout << "-------------------------------------------------------------------- QUEUE TESTING (w/ INTEGERS)" << std::endl;
    queueTester<int>();
    std::cout << "-------------------------------------------------------------------- STACK TESTING (w/ CHARS)" << std::endl;
    stackTester<char>();
    std::cout << "-------------------------------------------------------------------- QUEUE TESTING (w/ CHARS)" << std::endl;
    queueTester<char>();
    std::cout << "-------------------------------------------------------------------- END OF TESTING" << std::endl;
    return 0;
}
