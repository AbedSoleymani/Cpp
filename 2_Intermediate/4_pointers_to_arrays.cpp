#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    system("clear"); // For windows use "cls"

    const int arrayLength = 5;
    int numbers[arrayLength] = {1, 2, 3, 4, 5};

    /*
    We do not need to write:

    `int* ptr = &numbers;`

    This is because `numbers` is an array. When we use the name of an array,
    it automatically "decays" into a pointer to its first element. Therefore,
    `numbers` effectively represents the address of the first element of the array.
    */
    int* ptr = numbers; // Pointer to the first element of 'numbers'.

    for (int i = 0; i < arrayLength; i++) {
        cout << "Element " << i << ": " << *ptr << endl;
        ptr++; // Move to the next element of the array using pointer arithmetic
    }

    return 0;
}