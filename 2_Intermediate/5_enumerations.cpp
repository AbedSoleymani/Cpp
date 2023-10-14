/*
Enumerations, often referred to as "enums," are a user-defined data type in C++ used to
represent a set of named integer constants. Enums provide a way to create symbolic names
for values, making code more readable and maintainable. Enumerations are particularly useful
when you have a fixed set of related values that belong to a specific category or domain.

By default, enums use int as their underlying type. As a result, Enums are not designed to
be used for user input (i.e., `cin`) directly because they have underlying integer values.
However, we can specify a different underlying type if needed, such as `char` or `short`.
*/

#include <iostream>
#include <cstdlib>
#include <map>

using namespace std;

enum TrafficLightColor {
    Red,
    Yellow,
    Green
};

void printTrafficLightColor(TrafficLightColor color) {
    switch (color) {
        case Red:
            cout << "Stop! The light is red." << endl;
            break;
        case Yellow:
            cout << "Prepare to stop. The light is yellow." << endl;
            break;
        case Green:
            cout << "Go! The light is green." << endl;
            break;
    }
}

int main() {
    system("clear"); // For windows use "cls"

    // Create a map to associate `cin` input strings with enum values
    map<string, TrafficLightColor> colorMap;
    colorMap["Red"] = Red;
    colorMap["Yellow"] = Yellow;
    colorMap["Green"] = Green;

    string userInput;
    TrafficLightColor currentColor;

    cout << "Please type one of the lights: Red, Green, or Yellow: ";
    cin >> userInput;

    // Convert the user input to the corresponding enum value
    if (colorMap.find(userInput) != colorMap.end()) {
        currentColor = colorMap[userInput];
    } else {
        cout << "Invalid input." << endl;
        return 1; // Exit with an error code
    }
    printTrafficLightColor(currentColor);

    return 0;
}
