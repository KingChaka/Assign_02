/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The class for the linked list node.
*
************************************************* */

#ifndef SNODE_H
#define SNODE_H

template <typename T>
Class SNode {
    protected:
        T data;
        SNode<T> * next;
    public:
        SNode() : next(NULL) {}
};

#endif // SNODE_H
