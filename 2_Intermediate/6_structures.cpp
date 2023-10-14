/*
In C++, a structure (often referred to as a "struct") is a user-defined
data type that allows you to group together variables of different data
types under a single name. Structures are used to create custom data
structures that can represent a collection of related data items.

Structs provide a way to organize and manage data in a more structured and meaningful manner.
*/

#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

struct Rectangle {
    string name;
    double width;
    double height;
};

/*
In `calculateArea` function bellow, we pass `const Rectangle& rect` for two reasons:
    1. const: indicates that we do not intend to modify the `Rectangle` object attributes.
    2. &: represents a reference to a `Rectangle` object. This avoids making a copy of the Rectangle object.
*/
double calculateArea(const Rectangle& rect) {
    return rect.width * rect.height;
}

int main() {
    system("clear"); // For windows use "cls"

    Rectangle smallRectangle = {"Small", 3.5, 2.0};
    Rectangle largeRectangle = {"Large", 6.0, 4.5};

    cout << "Area of " << smallRectangle.name << " Rectangle: " << calculateArea(smallRectangle) << endl;
    cout << "Area of " << largeRectangle.name << " Rectangle: "  << calculateArea(largeRectangle) << endl;

    return 0;
}