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
   - [Access Modifiers](#access-modifiers)
   - [Encapsulation](#encapsulation)
   - [Modular Programming](#modular-programming)
   - [Abstraction](#abstraction)
   - [Templates](#templates)
   - [Unsafe versus Managed Languages](#unsafe-versus-managed-languages)
   - [Containers](#containers)

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

The decision to pass parameters by reference or by value depends on the specific requirements and design considerations of a function or class constructor.
In C++, large or complex objects like **strings**, **vectors**, or **user-defined classes** are typically passed by reference to avoid copying because passing by reference (e.g., const reference) is more efficient as it avoids making a copy of the large data. It also allows the function to work with the original strings without any additional overhead.
Smaller and simpler data types like **integers**, **floats**, and **characters** can often be passed by value. There is typically no significant performance advantage in passing them by reference.
Please see the constructor example below for more details:
```cpp
Car(const string& carMake, const string& carModel, int carYear)
        : make(carMake), model(carModel), year(carYear) {}
```
If the function needs to modify the parameter, it should be passed by reference for the sake of mutability. If it only needs to read the value, passing by const reference is a good practice to indicate that the parameter won't be modified.
### Access Modifiers
In C++, access modifiers are keywords used to control the visibility and accessibility of class members (i.e., variables and functions) from outside the class. C++ has three main access modifiers: public, private, and protected.

1. Public: Members declared as public are accessible from any part of the program. This means that both member functions and variables marked as public can be accessed and used from outside the class.
2. Private: Members declared as private are only accessible within the class where they are defined. They are not accessible from outside the class. This is a fundamental principle of encapsulation, ensuring that the internal details of a class are hidden from external code.
3. Protected: Members declared as protected are similar to private in that they are not directly accessible from outside the class. However, they have additional significance when dealing with inheritance. Inheritance allows derived classes to access protected members of the base class, while still keeping them hidden from other code.

These access modifiers are essential for encapsulation, which is one of the fundamental principles of object-oriented programming. Encapsulation helps control access to the internal state of an object, promoting data integrity and reducing the risk of unintended interference or errors in the program.

### Encapsulation
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
### Modular Programming
Modular coding in C++ is a software design and development approach that emphasizes the organization of code into separate, reusable modules or units. Each module typically has a specific responsibility or functionality, and in the context of C++, this often involves the use of header, source, and main files. Please see modular programming folder in advanced folder of this repo.

In C++:

- **Header files** (`*.h` or `*.hpp`) contain:
    1. **Declarations**: Header files contain declarations of classes, functions, and global variables, including their names, types, and access specifiers. Declarations specify the interface or contract for the code.

    2. **Inclusion Guards**: Header files typically include inclusion guards (e.g., `#ifndef STUDENT_H` and `#define STUDENT_H`) to prevent multiple inclusions and potential redefinition errors.

    3. **Included by Other Files**: Header files are meant to be included in other source files (e.g., `main.cpp` or other source files that use the class or functions defined in `student.h`).

    4. **No Function Definitions**: Header files do not contain the actual implementation of functions or classes. They only declare what functions and classes exist and their prototypes.

- **Source files** (`*.cpp`) contain: 
    1. **Implementations**: Source files contain the actual implementations (definitions) of functions and classes declared in the header file. They provide the code for the functions, including details of how they work.

    2. **No Inclusion Guards**: Source files typically do not include inclusion guards, as they are not meant to be included in other source files. They are compiled separately and linked together.

    3. **Compiled Separately**: Source files are compiled independently from other source files and produce object files, which are then linked together to create the final executable.

- **Main files** typically contain the `main()` function, which serves as the entry point of the program. The main function creates objects, calls functions, and orchestrates the program's flow.

In C++, it's common practice to separate the declarations (interfaces) from the implementations of functions and classes using header (.h) and source (.cpp) files. This approach offers several key advantages over combining declarations and implementations in a single file, as is often done in Python:

1. **Modularity and Encapsulation**:
   - Separating declarations and implementations enables modularity. It allows for changing the implementation of a function or class without affecting the code that uses it.
   - It promotes encapsulation, ensuring that users of a class or function need only know its interface (what it does and how to use it), not its internal details.

2. **Reduced Compilation Time**:
   - In large projects, changes to a function's implementation should not trigger recompilation of all code that uses it. Separate source files mean that only the source file containing the change needs to be recompiled, reducing compilation time.

3. **Avoiding Circular Dependencies**:
   - Separation helps prevent circular dependencies. Header files often include forward declarations (e.g., `class MyClass;`) instead of actual class definitions to avoid circular inclusion issues.

4. **Code Organization**:
   - Separation enhances code organization, making it easier to manage. It provides clear boundaries between the public interface and the private implementation.

5. **Readability and Maintenance**:
   - Code is often read more frequently than it's written. Separate header and source files make the code more readable, allowing users to quickly understand the interface without being distracted by the implementation details.

6. **Reusability**:
   - The separation encourages code reusability. Well-defined libraries and components with clear interfaces can be reused across different projects without exposing internal implementation details.

7. **Static and Shared Library Separation**:
   - When building libraries (static or shared), separation allows for a clear distinction between the interface included in the library's header and the implementation kept within the library itself.

In contrast, Python, as an interpreted language, doesn't require explicit compilation and linking. Python code files (.py) contain both declarations and implementations, which simplifies development but doesn't provide the same level of control and optimization available in compiled languages like C++.

While the separation of declarations and implementations in C++ may appear more complex, it enables software engineering practices that lead to better maintainability, extensibility, and collaboration in larger and more complex projects. It's a trade-off for the advantages it brings to the development and maintenance of complex software systems.

To run the modular codes in this repo (`./3_Advanced/5_modular-coding`), first execute this command in terminal to compile the whole modules:
```bash
g++ -o student_app student.cpp main.cpp
```
After creating `student_app` as the compiled file, you can execute the app using this command:
```bash
./student_app
```

### Abstraction

In C++, abstraction is a fundamental concept in object-oriented programming (OOP) that involves representing the essential features and behavior of an object or class while hiding the internal details and complexities. Abstraction allows you to create simplified models of real-world entities, focusing on what an object does rather than how it does it. It is one of the key principles of OOP, along with encapsulation, inheritance, and polymorphism.

Here are the key aspects of abstraction in C++:

1. **Hiding Complexity**: Abstraction hides the internal workings of an object or class, exposing only the necessary functionality to the user.

2. **Creating Classes**: Abstraction is often implemented through class definitions. Classes serve as blueprints for objects, defining attributes and methods.

3. **Public Interface**: Abstraction defines a public interface for the class, representing the contract between the class and its users.

4. **Data and Behavior Separation**: Abstraction separates the data (attributes) and behavior (methods) of an object, allowing changes to the internal implementation without affecting external code.

5. **Encapsulation**: Abstraction is closely related to encapsulation, where data and methods are bundled into a single unit (the class).

```cpp
class Shape {
public:
    // Abstract method to calculate area (no implementation here)
    virtual double CalculateArea() = 0;

    // Concrete method to display the shape's name
    void ShowShapeName() {
        cout << "This is a shape." << endl;
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Implementation of the abstract method for calculating the area
    double CalculateArea() override {
        return 3.14159265 * radius * radius;
    }
};

int main() {
    Circle circle(5.0);
    circle.ShowShapeName();
    cout << "Area: " << circle.CalculateArea() << endl;
    return 0;
}
```
In this example, the `Shape` class is an abstract base class that defines an abstract method `CalculateArea()` for calculating the area of different shapes. The `Circle` class is a concrete derived class that provides an implementation for the `CalculateArea()` method. The `Shape` class represents abstraction because it defines a common interface (`CalculateArea`) for shapes, but it doesn't provide specific implementations for every shape, allowing for flexibility in extending the hierarchy.

### Templates

In C++, templates are a powerful feature that allows us to write generic code that can work with different data types without sacrificing type safety. Templates enable us to create functions, classes, and data structures that can operate on a variety of data types while providing strong type checking at compile time. The primary goal of templates is to promote code reusability and flexibility.

There are two main types of templates in C++:

1. **Function Templates**: Function templates allow you to define a generic function that can work with different data types. You specify the data type(s) as a template parameter, and the compiler generates type-specific versions of the function when it is used with specific data types.
```cpp
#include <iostream>

template <typename T>
T Add(T a, T b) {
    return a + b;
}

int main() {
    int sum1 = Add(5, 7);         // Add integers
    double sum2 = Add(3.14, 2.71); // Add doubles

    std::cout << "Sum 1: " << sum1 << std::endl;
    std::cout << "Sum 2: " << sum2 << std::endl;

    return 0;
}
```
We can use this function with different data types like integers, doubles, and more.

2. **Class Templates**: Class templates allow you to define generic classes that can work with various data types or object types. Like function templates, you specify the data type(s) as template parameters, and the compiler generates class definitions based on the provided data types.
```cpp
#include <iostream>

template <typename T1, typename T2>
class Pair {
private:
    T1 first;
    T2 second;

public:
    Pair(const T1& a, const T2& b) : first(a), second(b) {}

    T1 GetFirst() const {
        return first;
    }

    T2 GetSecond() const {
        return second;
    }
};

int main() {
    // Create a Pair of int and string
    Pair<int, std::string> pair1(42, "Hello");

    // Create a Pair of double and char
    Pair<double, char> pair2(3.14159265, 'A');

    // Access and print the values
    std::cout << "Pair 1: " << pair1.GetFirst() << ", " << pair1.GetSecond() << std::endl;
    std::cout << "Pair 2: " << pair2.GetFirst() << ", " << pair2.GetSecond() << std::endl;

    return 0;
}
```
### Unsafe versus Managed Languages
The terms "unsafe" and "managed" refer to two different programming language categories, each with distinct characteristics:

**Managed Programming Language**:
- **Memory Management**: Managed languages, like Java, C#, and Python, provide automatic memory management. They handle memory allocation and deallocation, freeing developers from manual memory management tasks, such as allocating and releasing memory.
- **Garbage Collection**: Managed languages often employ a garbage collector, a system that automatically identifies and reclaims memory that is no longer in use. This helps prevent memory leaks and other memory-related issues.
- **Safety**: Managed languages are designed to prioritize safety and robustness. They typically include features like array bounds checking and type safety to minimize the risk of memory-related errors and buffer overflows.
- **Portability**: Managed languages are often more portable because they rely on a runtime environment (e.g., the Java Virtual Machine or the .NET Common Language Runtime) that abstracts the underlying hardware and operating system.
- **Examples**: Java, C#, Python, Ruby.

**Unsafe Programming Language**:
- **Manual Memory Management**: Unsafe languages, such as C and C++, require manual memory management. Programmers are responsible for allocating and releasing memory explicitly, which offers more control but can also lead to memory-related errors, such as memory leaks and segmentation faults.
- **No Garbage Collection**: Unsafe languages typically do not include a garbage collector. As a result, developers need to manage memory themselves, which can be error-prone.
- **Performance**: Unsafe languages often provide better performance since they allow low-level memory manipulation and direct access to hardware resources.
- **Safety Risks**: Due to the lack of automated safety features, developers must exercise greater caution to prevent memory-related errors and security vulnerabilities.
- **Examples**: C, C++, Assembly.

The choice between managed and unsafe languages depends on the specific requirements of a project:

- Managed languages are preferred for applications that prioritize safety, simplicity, and portability, such as web applications, desktop software, and applications that do not require the highest performance.
- Unsafe languages are chosen for systems programming, embedded systems, real-time applications, and scenarios where fine-grained control over memory and hardware resources is necessary, even if it comes at the cost of increased development complexity.

Hybrid languages, like Rust, aim to combine some of the advantages of both managed and unsafe languages, offering features for memory safety and control. The choice of language depends on the trade-offs and requirements of the project.

### Containers
In C++, "containers" refer to data structures or classes that are used to store and manage collections of objects. Containers provide a convenient way to organize and manipulate groups of data in a structured and efficient manner. C++ offers a variety of container classes as part of the Standard Template Library (STL) and you can also create your own custom container classes.

Here are some common types of containers in C++:

1. **Sequence Containers**:
- `std::vector`: A dynamic array that allows efficient random access and resizing.
```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers;

    // Adding elements to the vector
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Accessing elements
    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}
```
- `std::list`: A doubly-linked list that allows efficient insertions and deletions but has slower random access.
```cpp
#include <iostream>
#include <list>

int main() {
    std::list<int> numbers;

    // Adding elements to the list
    numbers.push_back(1);
    numbers.push_back(2);
    numbers.push_back(3);

    // Accessing elements
    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}
```
- `std::deque`: A double-ended queue that combines features of vectors and lists.
2. **Associative Containers**:
- `std::set`: A sorted set that stores unique values in ascending order.
```cpp
#include <iostream>
#include <set>

int main() {
    std::set<int> uniqueNumbers;

    // Adding elements to the set
    uniqueNumbers.insert(3);
    uniqueNumbers.insert(1);
    uniqueNumbers.insert(2);

    // Iterating through the set (values are automatically sorted)
    for (int num : uniqueNumbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}
```
- `std::multiset`: Similar to `std::set`, but allows duplicate values.
- `std::map`: A sorted associative array that stores key-value pairs (similar to Python dictionaries).
```cpp
#include <iostream>
#include <map>

int main() {
    std::map<std::string, int> studentScores;

    // Adding key-value pairs to the map
    studentScores["Alice"] = 95;
    studentScores["Bob"] = 88;
    studentScores["Charlie"] = 75;

    // Accessing values by key
    std::cout << "Alice's score: " << studentScores["Alice"] << std::endl;

    return 0;
}
```
- `std::multimap`: Similar to `std::map`, but allows duplicate keys.
3. **Unordered Containers**:
- `std::unordered_set`: A hash-based set that stores unique values.
- `std::unordered_multiset`: Similar to `std::unordered_set`, but allows duplicate values.
- `std::unordered_map`: A hash-based associative array that stores key-value pairs.
- `std::unordered_multimap`: Similar to `std::unordered_map`, but allows duplicate keys.
4. **Container Adapters**:
- `std::stack`: An adapter that provides a stack (Last-In, First-Out) interface.
```cpp
#include <iostream>
#include <stack>

int main() {
    std::stack<int> numberStack;

    // Push elements onto the stack
    numberStack.push(1);
    numberStack.push(2);
    numberStack.push(3);

    // Pop elements from the stack (Last-In, First-Out)
    while (!numberStack.empty()) {
        std::cout << numberStack.top() << " ";
        numberStack.pop();
    }

    std::cout << std::endl;

    return 0;
}
```
- `std::queue`: An adapter that provides a queue (First-In, First-Out) interface.
- `std::priority_queue`: An adapter that provides a priority queue interface.
5. **Array Containers**:
- `std::array`: A fixed-size array with a known size at compile time.
```cpp
#include <iostream>
#include <array>

int main() {
    std::array<int, 4> numbers = {1, 2, 3, 4};

    // Accessing elements
    for (int num : numbers) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}
```
6. **Custom Containers**: We can create your own custom container classes tailored to specific needs.