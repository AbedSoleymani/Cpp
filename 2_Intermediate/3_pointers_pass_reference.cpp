#include <iostream>
#include <cstdlib>

using namespace std;

void modifyValue(int* ptr) {
    *ptr += 10;
}

int main () {
    system("clear"); // For windows use "cls"

    int value = 8;
    modifyValue(&value);
    cout << "Modified value: " << value << endl;

    return 0;
}