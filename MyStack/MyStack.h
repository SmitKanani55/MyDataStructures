#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>

class MyStack {
private:
    int* data;
    int top;
    int capacity;

public:
    MyStack(int size = 100);         // Constructor
    MyStack(const MyStack& other);   // Copy Constructor
    ~MyStack();                      // Destructor

    void push(int value);
    int pop();
    int peek() const;
    bool isEmpty() const;
    bool isFull() const;
    int size() const;
    void display() const;
    
};

#endif
