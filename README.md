# OOPS Assignment Solutions

## Problem Statement
1. Create a class `BankAccount` with attributes account number and balance. Implement methods to deposit and withdraw funds, and a display method to show the account details.

## Coding Platform Used
- VS CODE

## Approach and Solution Explanation
To solve the problem, we implemented a class named `BankAccount` that encapsulates the properties and behaviors of a bank account. The class includes the following features:

1. **Attributes**:
   - `account_number`: A string that stores the unique identifier for the bank account.
   - `balance`: A double that represents the current balance of the account.

2. **Methods**:
   - **Constructor**: Initializes the account number and sets the initial balance.
   - `deposit(double amount)`: Adds the specified amount to the account balance.
   - `withdraw(double amount)`: Deducts the specified amount from the account balance if sufficient funds are available; otherwise, it displays an error message.
   - `display()`: Prints the account number and the current balance.

### Example Implementation

Here is the implementation of the `BankAccount` class in C++:

```cpp
#include <iostream>
#include <string>

using namespace std;

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
