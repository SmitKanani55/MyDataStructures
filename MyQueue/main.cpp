#include "MyQueue.h"
#include <iostream>
using namespace std;

int main() {
    MyQueue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front: " << q.getFront() << endl;
    cout << "Rear: " << q.getRear() << endl;

    cout << "Dequeued: " << q.dequeue() << endl;
    cout << "Front after dequeue: " << q.getFront() << endl;

    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60); // should show full

    while (!q.isEmpty()) {
        cout << "Dequeued: " << q.dequeue() << endl;
    }

    q.dequeue(); // should show empty

    return 0;
}
