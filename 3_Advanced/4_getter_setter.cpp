#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class Student {
public:
    string name;
private:
    int age;

/*
The constructor bellow initializes the `name` member using member initializer list which
initializes the member directly and can be more efficient, especially for complex types,
as it avoids creating a temporary object and invoking the assignment operator.

Of course we can certainly initialize the name member using the assignment operator `=`
instead of using the member initializer list as below:

Student(const string& studentName, int studentAge) {
    name = studentName;
    setAge(studentAge);
}

*/
public:
    Student(const string& studentName, int studentAge) : name(studentName) {
        setAge(studentAge);
    }

    // Setter for the private 'age' variable
    void setAge(int newAge) {
        if (newAge >= 0) {
            age = newAge;
        } else {
            cout << "Invalid age value. Age must be non-negative." << endl;
            age = 0; // Default age if invalid
        }
    }

    // Getter for the private 'age' variable
    int getAge() {
        return age;
    }
};

int main() {
    system("clear"); // For windows use "cls"

    Student student1("Alice", 20);

    cout << "Student's name: " << student1.name << endl; // Public variable access
    cout << "Student's age: " << student1.getAge() << endl; // Private variable access via getter

    // Use the setter to change the private variable age
    student1.setAge(25);

    cout << "Updated age: " << student1.getAge() << endl;

    // Attempt to set an invalid age using the setter
    student1.setAge(-5); // This will display an error message

    return 0;
}
