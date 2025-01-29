#include <iostream>
#include <string>

using namespace std; // Allows use of cout, endl, and string without std::

class BankAccount {
private:
    string account_number; // Stores account number
    double balance; // Stores account balance

public:
    // Constructor to initialize account number and balance
    BankAccount(string acc_num, double initial_balance) {
        account_number = acc_num;  // Assign account number
        balance = initial_balance; // Assign initial balance
    }

    // Function to deposit money into the account
    void deposit(double amount) {
        balance += amount; // Add amount to balance
    }

    // Function to withdraw money from the account
    void withdraw(double amount) {
        if (balance >= amount) {
            balance -= amount; // Deduct amount from balance
        } else {
            cout << "Insufficient balance!" << endl; // Display error message
        }
    }

    // Function to display account details
    void display() {
        cout << "Account Number: " << account_number << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account("123456789", 1000); // Create a bank account with an initial balance
    account.deposit(500); // Deposit 500
    account.withdraw(200); // Withdraw 200
    account.display(); // Show account details

    return 0;
}
