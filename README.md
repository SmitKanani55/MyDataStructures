🔹 Overview
MyDataStructures is a personal C++ project that implements core data structures — MyString, MyLinkedList, MyStack, and MyQueue — completely from scratch using dynamic memory management and object-oriented design principles. This repository showcases a strong grasp of system-level C++ including memory handling, class construction, and STL-like architecture.

Developed as part of a deep dive into data structures and low-level programming, the goal is to manually build the foundation of structures commonly abstracted by the STL, gaining full understanding of their internal workings.

🔹 Key Features
✅ Dynamic Memory Allocation using new and delete
✅ Operator Overloading (in MyString) for =, +, ==, <<, >>, and []
✅ Custom Constructors/Destructors in every class
✅ Copy/Move Semantics (deep copy, move constructor & move assignment in MyString)
✅ Linked List-Based Stack & Queue implementations
✅ Modular Codebase with clear header and implementation separation
✅ Traversal, Insertion, Deletion, Search operations (in MyLinkedList)
✅ Memory-safe Design – No STL used, manual resource handling

🔹 Ideal For
🎓 Students learning core data structures and object-oriented programming in C++
💡 Developers preparing for system-level or embedded interviews
🧠 Anyone who wants to understand how STL structures like std::string, std::stack, and std::queue work under the hood
🧪 Beginners exploring real-world use of classes, pointers, and memory management

🔹 Learning Outcomes
By studying or building this project, you will:

✨ Master class-based design in C++

🧱 Build reusable, testable code without relying on STL

🧠 Understand deep vs. shallow copies and memory lifecycle

🧮 Implement core algorithms like insertion, deletion, search manually

🧹 Avoid common bugs like memory leaks, dangling pointers, and shallow copies

🛠️ Develop STL-like behavior with full control over object memory and lifecycle


# MyDataStructures

A clean, beginner-friendly C++ implementation of essential **data structures** — created from scratch without using STL equivalents.  
This repository includes:
- `01_MyString`
- `02_MyLinkedList`
- `03_MyStack`
- `04_MyQueue`

This project demonstrates object-oriented programming, custom memory handling, and the internal workings of standard data structures.

> 🔧 **Author**: [Smit Kanani](https://github.com/SmitKanani55)  
> 🎯 **Goal**: Strengthen DSA fundamentals by re-implementing core data structures for resume/project-based learning.

---

## 🌟 What’s Inside

| Folder            | Description                                 |
|-------------------|---------------------------------------------|
| `01_MyString/`     | Custom string class with operator overloading, deep copy, etc. |
| `02_MyLinkedList/` | Singly linked list with insertion, deletion, and traversal |
| `03_MyStack/`      | Stack using both arrays and linked list     |
| `04_MyQueue/`      | Queue using arrays (circular buffer)        |

---

## 🧱 01_MyString

This folder contains a **custom implementation of the `std::string` class in C++**, named `MyString`.

It is built from scratch to mimic the core features of C++ standard strings, helping beginners understand how string classes manage memory, copy operations, and operator overloading internally.

---

## 🔧 Features

- Constructor (default, parameterized, copy, move)
- Destructor for proper memory cleanup
- Operator Overloading:
  - `=` (assignment)
  - `+` (concatenation)
  - `==` (equality check)
  - `[]` (index access)
  - `<<` and `>>` (stream input/output)
- Length tracking
- Manual memory management using dynamic allocation
- Deep copy and move semantics

---

## 📁 Files

- `MyString.h` – Class declaration and inline methods
- `MyString.cpp` – Full function definitions
- `main.cpp` – Driver program to test all functionalities

---



## 🧱 02_MyLinkedList 

This folder contains a **singly linked list** implementation in C++.

## 🔧 Features

- Insert at head, tail, or specific position
- Delete by value or position
- Traverse and print the list
- Search for a node
- Size tracking

## 📁 Files

- `MyLinkedList.h` – Class declaration
- `MyLinkedList.cpp` – Function definitions
- `main.cpp` – Driver program


---


## 🧱 03_MyStack 

This folder contains two stack implementations in C++:
- Using a dynamic array
- Using a linked list

## 🔧 Features

- `push()` – Add an element
- `pop()` – Remove top element
- `peek()` – View top element
- `isEmpty()` – Check if stack is empty
- `size()` – Stack size

## 📁 Files

- `MyStackArray.h` / `.cpp` – Stack using array
- `MyStackLinkedList.h` / `.cpp` – Stack using linked list
- `main.cpp` – Test driver for both versions



---



## 🧱 04_MyQueue 

This folder contains a **circular queue** implementation in C++ using an array.

## 🔧 Features

- `enqueue()` – Add element at rear
- `dequeue()` – Remove element from front
- `front()` – Peek at front element
- `isEmpty()` and `isFull()` checks
- Dynamic circular buffer logic

## 📁 Files

- `MyQueue.h` – Queue class
- `MyQueue.cpp` – Function definitions
- `main.cpp` – Test program



---



