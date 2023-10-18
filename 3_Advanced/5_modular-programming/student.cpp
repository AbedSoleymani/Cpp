#include "student.h"
#include <iostream>

// Constructor definition
Student::Student(const std::string& studentName, int studentAge) {
    name = studentName;
    setAge(studentAge);
}

// Getter for the 'age' member
int Student::getAge() {
    return age;
}

// Setter for the 'age' member
void Student::setAge(int newAge) {
    if (newAge >= 0) {
        age = newAge;
    } else {
        std::cout << "Invalid age value. Age must be non-negative." << std::endl;
        age = 0; // Default age if invalid
    }
}
