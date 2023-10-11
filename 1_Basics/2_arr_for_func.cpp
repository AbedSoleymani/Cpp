#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

/*
This is a regular function with confined input/output types.
*/
void printArrayElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        cout << "arr[" << i << "] = " << arr[i] << endl;
    }
}

/*
templated function:
    can work with multiple data types without having
    to rewrite the same code for each data type.
size_t:
    is an unsigned integer type in C++ that is commonly
    used to represent sizes and indices of objects in memory.
*/
template <size_t N>
size_t calArraySize(int (&arr)[N]) {
    return N;
}


int main() {
    system("clear"); // For windows use "cls"

    const int arraySize = 6;
    int fixedLengthArray[arraySize]; // We can't access or add element beyond the bound of the array.
    int newArray[] = {10, 20, 30}; // The size of the array is 3 and fixed!

    for (int i = 0; i < arraySize; i++) {
        fixedLengthArray[i] = i * 2;
    }

    cout << "Fixed-length array elements:" << endl;
    printArrayElements(fixedLengthArray, arraySize);

    cout << "New array elements with templated function for calculating the number of elements:" << endl;
    printArrayElements(newArray, calArraySize(newArray));

    return 0;
}