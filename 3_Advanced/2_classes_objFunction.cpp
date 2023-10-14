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
    // Public member function to initialize the account
    void initializeAccount(string holder, int number) {
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
};

int main() {
    system("clear"); // For windows use "cls"
    
    BankAccount myAccount;

    myAccount.initializeAccount("John Doe", 12345);

    myAccount.deposit(1000.0);
    myAccount.withdraw(500.0);
    myAccount.deposit(200.0);

    cout << "Account Holder: " << myAccount.getAccountHolder() << endl;

    ///////////////////////////////////////////////////////
    // You can no longer access the account number here. //
    ///////////////////////////////////////////////////////

    cout << "Current balance: $" << myAccount.getBalance() << endl;

    return 0;
}
