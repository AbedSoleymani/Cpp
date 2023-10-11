#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    system("clear"); // For windows use "cls"

    int choice;

    /* Display a menu to the user */
    cout << "Menu:" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Option 3" << endl;
    cout << "Enter your choice (1-3): ";
    cin >> choice;

    // Use a switch statement to perform actions based on user's choice
    switch (choice) {
        case 1:
            cout << "You selected Option 1." << endl;
            break;

        case 2:
            cout << "You selected Option 2." << endl;
            break;

        case 3:
            cout << "You selected Option 3." << endl;
            break;

        default:
            cout << "Invalid choice. Please select a valid option (1-3)." << endl;
            break;
    }
    
    return 0;
}
