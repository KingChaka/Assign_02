/* *************************************************
*  Name: Brandon Crenshaw
*  Assignment: #2 - Stack / Queue / Linked Lists
*  Purpose: The linked list class for the project.
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


#ifndef SLLIST_H
#define SLLIST_H

template <typename T>
class LinerSinglyLinkedList : public SNode<T> {
    private:
        SNode<T> * head;
        
    public:
        // CONSTRUCTOR and DESTRUCTOR
        LinerSinglyLinkedList() : head(NULL) {}
        
        ~LinerSinglyLinkedList() {
            deleteList();
        }
        
        // METHODS
        bool isEmptyList(){ return head == NULL; }

        bool addElmAtFront(T *inData){
            bool isAdded = true;
            SNode<T> * newHead = new SNode<T>;
            newHead->data = *inData;
            newHead->next = head;
            head = newHead;
            return isAdded;
        }
        
        bool insertElmAtEnd(T * inData){
            SNode<T> * currNode = head;
            
            // Make a new node
            SNode<T> * newNode = new SNode<T>;
            newNode->data = *inData;
            
            //Add to end of the list
            if(head == NULL) head = newNode;
            else {
                while(currNode->next != NULL){
                    currNode = currNode->next;
                }
            currNode->next = newNode;
            }
            return true;     
        }
        

        bool removefromFront(T * inData){
            bool wasRead = false;
            if (head == NULL){}
            else {
                SNode<T> * currNode = head;
                *inData = head->data;
                head = head->next;
                delete currNode;
                currNode = NULL;
                wasRead = true;
            }
            return wasRead;
        }

        bool nextElm(T * inData){
            bool wasRead = false;
            if(head == NULL){}
            else{
                *inData = head->data;
            }    
            return wasRead;}
        
        void deleteList(){
            T dummySpace;
            while( head != NULL ) { removefromFront(&dummySpace);}
        }


        bool copyList(LinerSinglyLinkedList * targetLL) {
            SNode<T> * currNode;
            targetLL.addElmAtFront(head->data);
            while( currNode->next != NULL ) {
                currNode = currNode->next;
                targetLL.insertElmAtEnd(currNode->data);
            }
            return true;
        }

};

#endif // SLLIST_H

