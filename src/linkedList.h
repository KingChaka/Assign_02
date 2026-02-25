/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The linked list class for the project.
*
************************************************* */

#include "snode.h"

#ifndef SLLIST_H
#define SLLIST_H

template <typename T>
Class LinerSinglyLinkedList {
    private:
        SNode<T> * head;
        
    public:
        // CONSTRUCTOR and DESTRUCTOR
        LinerSinglyLinkedList() : head(NULL) {}
        
        LinerSinglyLinkedList() {
            deleteList();
        }
        
        // METHODS
        isEmptyList(){ return head == NULL; }
        
        void insertElmAtEnd(T * inData){
            SNode<T> * currNode = head;
            
            // Make a new node
            SNode<T> * newNode = new SNode<T>;
            newNode->data = *inData;
            
            //Add to end of the list
            while( currNode->next != NULL){
                currNode = currNode->next;
            }
            currNode->next = newNode;            
        }
        

        bool removefromFront(){
            bool wasRemoved = false;
            if( ! isEmptyList() ){
                SNode<T> * currNode = head;
                head = head->next;
                delete currNode;
                currNode = NULL;
                wasRemoved = true;
            }
            return wasRemoved;
        }


        void copyList(LinerSinglyLinkedList * targetLL) {
            
            targetLL.addElmAtFront(head->data);
            while( currNode->next != NULL ) {
                currNode = currNode->next;
                targetLL.insertElmAtEnd(currNode->data);
            }
        }
        
        deleteList(){
            SNode<T> * currNode = head;
            SNode<T> * prevNode = head;
            
            while( head->next != NULL ) {
                while( currNode->next != NULL ) {
                    prevNode = currNode;
                    currNode = currNode->next;            
                }
            prevNode->next = NULL;
            delete currNode;
            }
            delete currNode;
            currNode = NULL;
            
        }
        
        
        nextElm(){}
        
        bool addElmAtFront(T *inData){
            bool isAdded = true;
            SNode<T> * newHead = new SNode<T>;
            newHead->data = *inData;
            newHead->next = head;
            head = newHead;
            return isAdded;
        }
};

#endif // SLLIST_H

