#include "MyStack.h"
#include<iostream>

using namespace std;

int main() {
    MyStack s(5);

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.display();

    cout << "Top element: " << s.peek() << "\n";
    cout << "Popped: " << s.pop() << "\n";
    s.display();

    return 0;
}
