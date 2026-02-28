/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The class for the linked list node.
*
************************************************* */

#ifndef SNODE_H
#define SNODE_H

template <typename T>
class SNode {
    protected:

    public:
        SNode() : next(NULL) {}
        SNode<T> * next;
        T data;
};

#endif // SNODE_H
