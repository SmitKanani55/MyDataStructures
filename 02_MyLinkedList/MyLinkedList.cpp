#include "MyLinkedList.h"

// Node Constructor
Node::Node(int value) {
    data = value;
    next = nullptr;
}

// Linked List Constructor
SinglyLinkedList::SinglyLinkedList() {
    head = nullptr;
}

// Destructor
SinglyLinkedList::~SinglyLinkedList() {
    Node* temp;
    while (head != nullptr) {
        temp = head;
        head = head->next;
        delete temp;
    }
}

// Insert at Front
void SinglyLinkedList::insertFront(int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    head = newNode;
}

// Insert at Back
void SinglyLinkedList::insertBack(int value) {
    Node* newNode = new Node(value);
    if (!head) {
        head = newNode;
        return;
    }
    Node* temp = head;
    while (temp->next != nullptr)
        temp = temp->next;
    temp->next = newNode;
}

// Delete a value
void SinglyLinkedList::deleteValue(int value) {
    if (!head) return;

    if (head->data == value) {
        Node* toDelete = head;
        head = head->next;
        delete toDelete;
        return;
    }

    Node* current = head;
    while (current->next && current->next->data != value)
        current = current->next;

    if (current->next) {
        Node* toDelete = current->next;
        current->next = toDelete->next;
        delete toDelete;
    }
}

// Search a value
bool SinglyLinkedList::search(int value) const {
    Node* temp = head;
    while (temp) {
        if (temp->data == value)
            return true;
        temp = temp->next;
    }
    return false;
}

// Display list
void SinglyLinkedList::display() const {
    Node* temp = head;
    std::cout << "List: ";
    while (temp) {
        std::cout << temp->data << " -> ";
        temp = temp->next;
    }
    std::cout << "NULL\n";
}

// Get size
int SinglyLinkedList::size() const {
    int count = 0;
    Node* temp = head;
    while (temp) {
        ++count;
        temp = temp->next;
    }
    return count;
}
