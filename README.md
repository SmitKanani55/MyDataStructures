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

### ✅ Final Step: Add and Push to GitHub

Place each of these `README.md` files inside their respective folders and commit them:

```bash
git add 02_MyLinkedList/README.md 03_MyStack/README.md 04_MyQueue/README.md
git commit -m "Added detailed README files for LinkedList, Stack, and Queue"
git push

