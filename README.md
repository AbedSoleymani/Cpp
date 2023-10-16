# C++ Learning Repository

Welcome to my C++ learning repository! Here, I'll share my experiences and insights into C++. This repository covers fundamental to advanced concepts in C++, serving as a resource for revisiting the language and for high-level learning.

## Table of Contents
1. [Introduction](#introduction)
   - [Applications of C++](#applications-of-c++)
   - [C++ Standard Library](#c++-standard-library)
   - [Compiling](#compiling)

2. [Topics](#topics)
   - [Basics](#basics)
   - [Intermediate](#intermediate)
   - [Advanced](#advanced)

3. [Various Points](#various-points)
   - [Naming Conventions](#naming-conventions)
   - [Increment and Decrement](#increment-and-decrement)
   - [Pointers](#pointers)
   - [Passing Arguments](#passing-arguments)
   - [Access Modifiers](#access_modifiers)
   - [Getters and Setters](#getters_setters)

## Introduction

### Applications of C++
C++ is a versatile language with applications in various domains, including:
- Developing high-performance applications
- Video games
- Device drivers
- Web browsers
- Servers
- Operating systems

### C++ Standard Library
The C++ Standard Library includes essential components:
- **Data Structures:** List and Map
- **Algorithms:** Searching and Sorting

### Compiling
In C++, compiling translates human-readable source code into machine-executable code. The process involves creating an executable file for running on a computer.

## Topics of the Codes

### Basics
- Fundamentals of C++ programming
- Data types
- Arrays
- Decision-making statements
- Loops
- Functions

### Intermediate
- Pointers
- Structures
- Enumerations
- Exceptions
- Templates
- Containers

### Advanced
- Classes and objects
- Access modifiers
- Constructors
- Encapsulation
- Abstraction
- Inheritance
- Polymorphism

## Various Points

### Naming Conventions
C++ follows various naming conventions:
- Snake Case: Suitable for variables and constants (e.g., `int file_size`).
- Pascal Case: Ideal for naming classes (e.g., `int FileSize`).
- Camel Case: More popular in C++ (e.g., `int fileSize`).

Consistency in convention usage enhances code clarity. Snake and camel cases are the most popular conventions in this language. Tthis repo follows the camel case convention. Moreover, please note that C++ is a STATICALLY-TYPED language, and the type of a parameter should be defined at the declaration stage and cannot be changed.

### Increment and Decrement
```cpp
int x = 10;
int y = x++; // x = 11, y = 10
```
```cpp
int x = 10;
int z = ++x; // x = 11, z = 11
```

### Pointers
In C++, a pointer is a variable that holds the memory address of another variable. Pointers are a powerful feature of the language and are used for various purposes, including dynamic memory allocation, passing references to functions, and accessing data structures like arrays and linked lists.

Using pointers in C++ offers several advantages over using variables directly:

1. Dynamic Memory Allocation: Pointers allow you to allocate memory dynamically at runtime using functions like new and malloc. This is particularly useful for creating data structures of variable size, like arrays and linked lists, and for managing memory efficiently.
2. Passing by Reference: Pointers enable you to pass variables to functions by reference, allowing functions to modify the original variable's value. This is especially beneficial when you want to avoid copying large objects or when you need to update multiple values in a function.
3. Data Structures: Pointers are essential for building complex data structures such as linked lists, trees, and graphs. These data structures require dynamic memory allocation and references to different parts of the data structure, which can be efficiently achieved using pointers.
4. Efficiency: When working with large data sets, using pointers can be more memory-efficient than duplicating data. Pointers allow multiple variables to refer to the same data, reducing memory consumption.
5. Array Access: Pointers enable efficient traversal of arrays and other contiguous data structures using pointer arithmetic. This can be faster than using array indices in certain situations.
6. Polymorphism and Inheritance: Pointers to base classes are essential for implementing polymorphism and working with derived classes in object-oriented programming. They allow you to create and manipulate objects of derived classes through pointers to base classes.

### Passing Arguments
In C++, there are several methods for passing arguments to functions, each with its own characteristics and use cases. The primary methods for passing arguments to functions in C++ are:

1. Pass by Value: In this method, a copy of the argument is passed to the function. Changes made to the parameter inside the function do not affect the original argument.
```cpp
void function(int x) {
    // Changes to 'x' do not affect the original value
    x = x + 1;
}
```
2. Pass by Reference: This method allows a function to receive a reference to the original variable. Any modifications made to the parameter inside the function directly affect the original argument.
```cpp
void function(int& x) {
    // Changes to 'x' affect the original value
    x = x + 1;
}
```
3. Pass by Pointer: In this method, a pointer to the argument is passed to the function. Similar to pass by reference, changes made to the parameter through the pointer affect the original argument.
```cpp
void function(int* ptr) {
    // Changes to the value pointed to by 'ptr' affect the original value
    (*ptr) = (*ptr) + 1;
}
```
4. Pass by Const Reference: This method is used to pass read-only references to functions. It ensures that the function cannot modify the original argument.
```cpp
void function(const int& x) {
    // 'x' is read-only; cannot be modified here
}
```
### Access Modifiers
In C++, access modifiers are keywords used to control the visibility and accessibility of class members (i.e., variables and functions) from outside the class. C++ has three main access modifiers: public, private, and protected.

1. Public: Members declared as public are accessible from any part of the program. This means that both member functions and variables marked as public can be accessed and used from outside the class.
2. Private: Members declared as private are only accessible within the class where they are defined. They are not accessible from outside the class. This is a fundamental principle of encapsulation, ensuring that the internal details of a class are hidden from external code.
3. Protected: Members declared as protected are similar to private in that they are not directly accessible from outside the class. However, they have additional significance when dealing with inheritance. Inheritance allows derived classes to access protected members of the base class, while still keeping them hidden from other code.

These access modifiers are essential for encapsulation, which is one of the fundamental principles of object-oriented programming. Encapsulation helps control access to the internal state of an object, promoting data integrity and reducing the risk of unintended interference or errors in the program.

### Getters and Setters
In C++, getters and setters are methods used to control access to the private member variables (data members) of a class. They are essential for encapsulation, one of the fundamental principles of object-oriented programming. Getters and setters provide controlled access to the internal state of a class, allowing you to get or set the values of private members.

#### Getters
- Getters are used to access the values of private data members.
- They provide read-only access to the data.
- Getters typically have a return type and return the value of the data member.
- Use getters when you want to retrieve the value of a private member from outside the class.

```cpp
class MyClass {
private:
    int myValue;

public:
    int getMyValue() {
        return myValue;
    }
};
```
#### Setters
- Setters are used to modify or update the values of private data members.
- They provide a controlled way to update the data.
- Setters do not have a return type (usually void) but take an argument to set the new value.
- Use setters when you want to change the value of a private member, often with input validation or other logic.
```cpp
class MyClass {
private:
    int myValue;

public:
    void setMyValue(int newValue) {
        if (newValue >= 0) {
            myValue = newValue;
        } else {
            // Optionally handle invalid input
        }
    }
};
```