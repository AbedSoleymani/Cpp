/*
Since I am using VS Code, first, I have to execute this line

g++ -o student_app student.cpp main.cpp

in the terminal to creat `student_app` which is a placeholder for the
name we want to give to our compiled C++ program for modular codes.
Now, we can run the program by executing this command

./student_app

in the terminal.
*/

#include "student.h"
#include <iostream>
#include <cstdlib>

int main() {
    system("clear"); // For windows use "cls"

    Student student1("Alice", 20);

    std::cout << "Student's name: " << student1.name << std::endl;
    std::cout << "Student's age: " << student1.getAge() << std::endl;

    // Use the setter to change the age
    student1.setAge(25);

    std::cout << "Updated age: " << student1.getAge() << std::endl;

    // Attempt to set an invalid age using the setter
    student1.setAge(-5); // This will display an error message

    return 0;
}
