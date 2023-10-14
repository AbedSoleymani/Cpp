/*
In C++, a constructor is a special member function of a class that is automatically called
when an object of the class is created. Constructors are used to initialize the object's
data members or perform any other necessary setup operations.

If a class does not provide any constructors, the compiler will automatically generate
a default constructor with no parameters.

Constructors have the same name as the class itself to be recognized from other functions in the class.
Constructors also do not have a return type before their name, not even void!
*/

#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

class BankAccount {
private:
    double balance;
    string accountHolder;
    int accountNumber;

public:
    // Constructor to initialize the account
    BankAccount(string holder, int number) {
        balance = 0.0;
        accountHolder = holder;
        accountNumber = number;
    }

    // Public member function to deposit funds
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }

    // Public member function to withdraw funds
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn $" << amount << ". New balance: $" << balance << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance." << endl;
        }
    }

    // Public member function to check the account balance
    double getBalance() {
        return balance;
    }

    // Public member function to get the account holder's name
    string getAccountHolder() {
        return accountHolder;
    }

    // Public member function to get the account number
    int getAccountNumber() {
        return accountNumber;
    }
};

int main() {
    system("clear"); // For windows use "cls"

    BankAccount myAccount("John Doe", 12345);

    myAccount.deposit(1000.0);
    myAccount.withdraw(500.0);
    myAccount.deposit(200.0);

    cout << "Account Holder: " << myAccount.getAccountHolder() << endl;

    cout << "Account Number: " << myAccount.getAccountNumber() << endl;

    cout << "Current balance: $" << myAccount.getBalance() << endl;

    return 0;
}
