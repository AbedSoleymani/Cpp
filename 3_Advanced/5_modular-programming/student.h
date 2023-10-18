#ifndef STUDENT_H
#define STUDENT_H

#include <string>

class Student {
public:
    std::string name;

    // Constructor declaration
    Student(const std::string& studentName, int studentAge);

    // Getter for the 'age' member
    int getAge();

    // Setter for the 'age' member
    void setAge(int newAge);

private:
    int age;
};

#endif
