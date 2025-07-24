#include "MyStack.h"

MyStack::MyStack(int size) {
    capacity = size;
    data = new int[capacity];
    top = -1;
}

MyStack::MyStack(const MyStack& other) {
    capacity = other.capacity;
    top = other.top;
    data = new int[capacity];
    for (int i=0;i<=top;i++) {
        data[i] = other.data[i];
    }
}

MyStack::~MyStack() {
    delete[] data;
}

void MyStack::push(int value) {
    if (isFull()) {
        std::cerr << "Stack Overflow\n";
        return;
    }
    top++;
    data[top] = value;
}

int MyStack::pop() {
    if (isEmpty()) {
        std::cerr << "Stack Underflow\n";
        // Note: std::cerr is used instead of std::cout to display error messages.
        // It is unbuffered and outputs immediately, making it suitable for debugging and error reporting.

        return -1; // You can throw exception instead
    }
    return data[top--];
}

int MyStack::peek() const {
    if (isEmpty()) {
        std::cerr << "Stack is Empty\n";
        return -1;
    }
    return data[top];
}

bool MyStack::isEmpty() const {
    return top == -1;
}

bool MyStack::isFull() const {
    return top == capacity - 1;
}

int MyStack::size() const {
    return top + 1;
}

void MyStack::display() const {
    if (isEmpty()) {
        std::cout << "Stack is Empty\n";
        return;
    }
    std::cout << "Stack (top to bottom): ";
    for (int i = top;i >= 0;i--) {
        std::cout << data[i] << " ";
    }
    std::cout << "\n";
}
