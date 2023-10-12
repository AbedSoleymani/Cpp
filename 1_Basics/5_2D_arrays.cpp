#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    system("clear"); // For windows use "cls"

    /*
    In C++, the dimensions of a statically allocated array (like a 2D array) must be known at
    compile-time (e.g., `const int`), and variable dimensions (e.g., `int`) are not allowed.
    */
    const int numRows = 2;
    const int numColumns = 3;

    int twoDArray[numRows][numColumns] = {{1, 2, 3},
                                          {4, 5, 6}};

    cout << "Elements of the 2D array:" << endl;
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numColumns; j++) {
            cout << twoDArray[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}