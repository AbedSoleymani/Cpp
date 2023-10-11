#include <iostream>
#include <sstream> // For stringstream
#include <cstdlib>

 using namespace std;

string getAgeCategory(int age) {
    if (age < 18) {
        return "Minor";
    } else if (age > 18 && age < 60) {
        return "Adult";
    } else {
        return "Senior";
    }
}

 int main() {
    system("clear"); // For windows use "cls"

    int numUsers;
    /* Input validation for `numUsers` */
    while (true) {
        cout << "Enter the number of users: ";
        string input;
        cin >> input;

        stringstream ss(input);
        if (ss >> numUsers && ss.eof() && numUsers > 0) {
            break; // Valid input, exit the loop
        }

        cout << "Invalid input. Please enter a positive integer for the number of users." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    for (int i = 0; i < numUsers; i++) {
        int age;
        // Input validation for age
        while (true) {
            cout << "User " << i << ": Enter your age: ";
            string input;
            cin >> input;

            stringstream ss(input);
            if (ss >> age && ss.eof() && age >= 0 && age <= 120) {
                break; // Valid input, exit the loop
            }

            cout << "Invalid age. Please enter a valid integer age between 0 and 120." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
        
        cout << "The user is: " << getAgeCategory(age) << endl;
    }

    return 0;
 }