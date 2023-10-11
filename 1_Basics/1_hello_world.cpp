#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int gain = 1; // If we do not initialize, it will assign garbage value to it at each run!
    int radius;
    const double pi = 3.14; // we cannot change this value

    cout << "Please enter an integer for radius of the circle: ";
    cin >> radius;

    radius *= gain; // we can update the variable `radius`
    
    cout << "The area is: " << pow(radius, 2) * pi << endl;

    return 0;
}