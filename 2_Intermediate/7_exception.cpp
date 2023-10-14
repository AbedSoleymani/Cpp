#include <iostream>
#include <cstdlib>

using namespace std;

int divide(int a, int b) {
    if (b == 0) {
        throw runtime_error("Customized error: Division by zero!");
    }
    return a / b;
}


int main() {
    system("clear"); // For windows use "cls"

    try {
        int result = divide(10, 0);
        cout << "Result: " << result << endl;
    } catch (const exception& e) {
        cerr << "Error: " << e.what() << endl;
    }

    return 0;
}