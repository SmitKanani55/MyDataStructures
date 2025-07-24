#include "MyQueue.h"
#include <iostream>
using namespace std;

MyQueue::MyQueue(int capacity) {
    this->capacity = capacity;
    arr = new int[capacity];
    front = 0;
    rear = -1;
    size = 0;
}

MyQueue::~MyQueue() {
    delete[] arr;
}

bool MyQueue::isEmpty() const {
    return size == 0;
}

bool MyQueue::isFull() const {
    return size == capacity;
}

void MyQueue::enqueue(int value) {
    if (isFull()) {
        cout << "Queue is full. Cannot enqueue " << value << endl;
        return;
    }
    rear = (rear + 1) % capacity;
    arr[rear] = value;
    size++;
}

int MyQueue::dequeue() {
    if (isEmpty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
        return -1;
    }
    int value = arr[front];
    front = (front + 1) % capacity;
    size--;
    return value;
}

int MyQueue::getFront() const {
    if (isEmpty()) {
        cout << "Queue is empty. No front element." << endl;
        return -1;
    }
    return arr[front];
}

int MyQueue::getRear() const {
    if (isEmpty()) {
        cout << "Queue is empty. No rear element." << endl;
        return -1;
    }
    return arr[rear];
}
