#include "MyLinkedList.h"

int main() {
    SinglyLinkedList list;

    list.insertBack(10);
    list.insertBack(20);
    list.insertFront(5);

    list.display();  // Output: 5 -> 10 -> 20 -> NULL

    list.deleteValue(10);
    list.display();  // Output: 5 -> 20 -> NULL

    std::cout << "Search 20: " << (list.search(20) ? "Found" : "Not Found") << "\n";
    std::cout << "Size: " << list.size() << "\n";

    return 0;
}
