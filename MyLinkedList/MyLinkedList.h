#ifndef SINGLYLINKEDLIST_H
#define SINGLYLINKEDLIST_H

#include <iostream>

class Node {
public:
    int data;
    Node* next;

    Node(int value);
};

class SinglyLinkedList {
private:
    Node* head;

public:
    SinglyLinkedList();
    ~SinglyLinkedList();

    void insertFront(int value);
    void insertBack(int value);
    void deleteValue(int value);
    bool search(int value) const;
    void display() const;
    int size() const;
};

#endif