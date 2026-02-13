/* 1- Node Class: A generic Node class used by all three types of linked lists.
 2- Singly Linked List:Methods for adding/removing from the front and tail.Search and contains methods.
 3- Doubly Linked List:Bi-directional prev and next pointers.
 Methods for adding/removing nodes.
 4- Circular Linked List:Circular linkage maintained through the tail->next = head.
 Note: This code provides a solid foundation for generic linked lists in C++.
 W4-Linked Lists Class-Generic Coding
 Created by Manouchehr Mohandesi on 9/18/24.
*/

#include <iostream>
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
template <typename T>
class Node {
public:
    T data;
    Node<T>* next;
    Node<T>* prev; // only used for doubly linked list

    Node(T val) : data(val), next(nullptr), prev(nullptr) {}
};
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Singly Linked List
template <typename T>
class SinglyLinkedList {
private:
    Node<T>* head;
public:
    SinglyLinkedList() : head(nullptr) {}

    // Check if list is empty
    bool isEmpty() {
        return head == nullptr;
    }

    // Add node to the front
    void addFront(T val) {
        Node<T>* newNode = new Node<T>(val);
        newNode->next = head;
        head = newNode;
    }

    // Add node to the end
    void addTail(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = newNode;
        } else {
            Node<T>* temp = head;
            while (temp->next != nullptr) {
                temp = temp->next;
            }
            temp->next = newNode;
        }
    }

    // Remove node from the front
    void removeFront() {
        if (!isEmpty()) {
            Node<T>* temp = head;
            head = head->next;
            delete temp;
        }
    }

    // Remove node from the end
    void removeTail() {
        if (isEmpty()) return;
        if (head->next == nullptr) {
            delete head;
            head = nullptr;
        } else {
            Node<T>* temp = head;
            while (temp->next->next != nullptr) {
                temp = temp->next;
            }
            delete temp->next;
            temp->next = nullptr;
        }
    }

    // Search for an element
    Node<T>* search(T val) {
        Node<T>* temp = head;
        while (temp != nullptr) {
            if (temp->data == val)
                return temp;
            temp = temp->next;
        }
        return nullptr;
    }

    // Check if list contains a value
    bool contains(T val) {
        return search(val) != nullptr;
    }

    // Print the list
    void retrace() {
        Node<T>* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Doubly Linked List
template <typename T>
class DoublyLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
public:
    DoublyLinkedList() : head(nullptr), tail(nullptr) {}

    bool isEmpty() {
        return head == nullptr;
    }

    void addFront(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void addTail(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
        } else {
            tail->next = newNode;
            newNode->prev = tail;
            tail = newNode;
        }
    }

    void removeFront() {
        if (!isEmpty()) {
            Node<T>* temp = head;
            if (head == tail) {
                head = tail = nullptr;
            } else {
                head = head->next;
                head->prev = nullptr;
            }
            delete temp;
        }
    }

    void removeTail() {
        if (!isEmpty()) {
            Node<T>* temp = tail;
            if (head == tail) {
                head = tail = nullptr;
            } else {
                tail = tail->prev;
                tail->next = nullptr;
            }
            delete temp;
        }
    }

    Node<T>* search(T val) {
        Node<T>* temp = head;
        while (temp != nullptr) {
            if (temp->data == val)
                return temp;
            temp = temp->next;
        }
        return nullptr;
    }

    bool contains(T val) {
        return search(val) != nullptr;
    }

    void retrace() {
        Node<T>* temp = head;
        while (temp != nullptr) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
};
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Circular Linked List
template <typename T>
class CircularLinkedList {
private:
    Node<T>* head;
    Node<T>* tail;
public:
    CircularLinkedList() : head(nullptr), tail(nullptr) {}

    bool isEmpty() {
        return head == nullptr;
    }

    void addFront(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
            tail->next = head; // circular link
        } else {
            newNode->next = head;
            head = newNode;
            tail->next = head; // maintain circular link
        }
    }

    void addTail(T val) {
        Node<T>* newNode = new Node<T>(val);
        if (isEmpty()) {
            head = tail = newNode;
            tail->next = head; // circular link
        } else {
            tail->next = newNode;
            tail = newNode;
            tail->next = head; // maintain circular link
        }
    }

    void removeFront() {
        if (!isEmpty()) {
            if (head == tail) { // only one node
                delete head;
                head = tail = nullptr;
            } else {
                Node<T>* temp = head;
                head = head->next;
                tail->next = head; // maintain circular link
                delete temp;
            }
        }
    }

    void removeTail() {
        if (!isEmpty()) {
            if (head == tail) { // only one node
                delete head;
                head = tail = nullptr;
            } else {
                Node<T>* temp = head;
                while (temp->next != tail) {
                    temp = temp->next;
                }
                delete tail;
                tail = temp;
                tail->next = head; // maintain circular link
            }
        }
    }

    Node<T>* search(T val) {
        if (isEmpty()) return nullptr;
        Node<T>* temp = head;
        do {
            if (temp->data == val)
                return temp;
            temp = temp->next;
        } while (temp != head);
        return nullptr;
    }

    bool contains(T val) {
        return search(val) != nullptr;
    }

    void retrace() {
        if (isEmpty()) return;
        Node<T>* temp = head;
        do {
            std::cout << temp->data << " ";
            temp = temp->next;
        } while (temp != head);
        std::cout << std::endl;
    }
};
//-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=
// Main function for testing
int main() {
    // Test Singly Linked List
    SinglyLinkedList<int> sll;
    sll.addFront(10);
    sll.addTail(20);
    sll.addFront(5);
    sll.retrace(); // Output: 5 10 20
    sll.removeFront();
    sll.removeTail();
    sll.retrace(); // Output: 10

    // Test Doubly Linked List
    DoublyLinkedList<int> dll;
    dll.addFront(30);
    dll.addTail(40);
    dll.addFront(25);
    dll.retrace(); // Output: 25 30 40
    dll.removeFront();
    dll.removeTail();
    dll.retrace(); // Output: 30

    // Test Circular Linked List
    CircularLinkedList<int> cll;
    cll.addFront(100);
    cll.addTail(200);
    cll.addFront(50);
    cll.retrace(); // Output: 50 100 200
    cll.removeFront();
    cll.removeTail();
    cll.retrace(); // Output: 100

    return 0;
}

