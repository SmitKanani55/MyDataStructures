#ifndef MYQUEUE_H
#define MYQUEUE_H

class MyQueue {
private:
    int* arr;
    int front;
    int rear;
    int size;
    int capacity;

public:
    MyQueue(int capacity = 100);
    ~MyQueue();

    bool isEmpty() const;
    bool isFull() const;

    void enqueue(int value);
    int dequeue();
    int getFront() const;
    int getRear() const;
};

#endif
