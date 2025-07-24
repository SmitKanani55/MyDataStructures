# 📦 MyStack – Custom Stack Implementation in C++

> A simple and efficient custom implementation of the **Stack** data structure using arrays in C++, built to replicate and benchmark against `std::stack`.

---

## 📌 About This Project

This project implements a custom **Stack class** (`MyStack`) using arrays to simulate LIFO (Last In First Out) behavior, similar to `std::stack`. It's designed to:

- Understand core stack operations without relying on STL
- Practice object-oriented principles (constructors, destructors, deep copy)
- Handle overflow/underflow cases gracefully
- Compare performance with STL's `std::stack` using benchmarks

---

## 💻 Features

- Array-based memory management
- Push, Pop, Peek operations
- Overflow and underflow handling using `std::cerr`
- Display function to show current stack elements
- Copy constructor for deep copy
- STL comparison via timed benchmarking (`CompareWithSTL.cpp`)

---

🚀 How to Clone and Run MyStack Locally
Once the repository is uploaded, users can download and run it using the following steps:

🔹 Clone the Repository


Open a terminal or command prompt and run the following command to clone the repository:

git clone https://github.com/SmitKanani55/MyStack_Implementation.git


🔹 Navigate to the Folder


After the repository is cloned, navigate to the project directory:

cd MyStack_Implementation


🔹 Compile and Run the Code

📦 For Linux/macOS:

Use the following commands to compile and run the code:

g++ main.cpp MyStack.cpp CompareWithSTL.cpp -o mystack

./mystack

🪟 For Windows (Using MinGW):

Open Command Prompt (with g++ installed) and run:

g++ main.cpp MyStack.cpp CompareWithSTL.cpp -o mystack.exe

mystack.exe


🙏 Thank You!
Thank you for checking out MyStack_Implementation! I hope you find the project useful. If you have any suggestions, feedback, or improvements, feel free to share them.
Your thoughts and contributions are always welcome!
<br>
🌟 Show Your Support
If you found this project helpful or interesting, please consider starring the repository ⭐.
It motivates me to keep improving and sharing more projects!



