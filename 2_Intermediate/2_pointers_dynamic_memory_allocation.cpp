#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    system("clear"); // For windows use "cls"

    int* dynamicArray = new int[5]; // Allocate memory for an integer array

    for (int i = 0; i < 5; i++) {
        dynamicArray[i] = i * 2; // Assign values to the elements
    }

    for (int i = 0; i < 5; i++) {
        cout << "dynamicArray[" << i << "] = " << dynamicArray[i] << endl;
    }

    delete[] dynamicArray; // Deallocate the memory

    /*
    Now, the memory that `dynamicArray` previously pointed to has been deallocated, and
    the pointer `dynamicArray` is now considered a "dangling pointer." Attempting to access
    any element of the array through this dangling pointer (like next line) is undefined
    behavior because the memory it points to is no longer valid or owned by the program.
    */

    cout << "dynamicArray[2] = " << dynamicArray[2] << endl; // Undefined behavior

    return 0;
}