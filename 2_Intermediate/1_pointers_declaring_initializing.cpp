#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    system("clear"); // For windows use "cls"

    int age = 19;
    cout << "Memory address of variable `age`: " << &age << endl;

    /*
    Now we define a pointer variable.
    The data type of each pointer variable should be the same as the variable itself.
    */
    int* pAge = &age;
    cout << "The value in pointer variable is: " << pAge << endl;

    /* Now, we de-referencing the pointer variable */
    cout << "The value of the variable accessed by the pointer variable: " << *pAge << endl;

    double gpa = 3.8;
    double* pGpa = &gpa; // pointer variable should have the same data type as the variable itself.

    string name = "Abed";
    string* pName = &name; // pointer variable should have the same data type as the variable itself.


    return 0;
}