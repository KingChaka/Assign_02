/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The class for the stack.
*
************************************************* */

#include "linkedList.h"

#ifndef QUEUE_H
#define QUEUE_H

template <typename T>
class Queue : public SNode<T> {
    private:
        LinerSinglyLinkedList<T> qlist;

    public:
        Queue() { }
        ~Queue(){ qlist.deleteList(); }

        // No descriptions: These methods only call the linked list methods.
        bool isEmpty(){ return qlist.isEmptyList(); }
        bool insert(T * nodeData){ return qlist.insertElmAtEnd(nodeData); }
        bool remove(T * nodeData){ return qlist.removefromFront(nodeData); }
        bool next(T * nodeData){ return qlist.nextElm(nodeData);}
};

#endif  // QUEUE_H