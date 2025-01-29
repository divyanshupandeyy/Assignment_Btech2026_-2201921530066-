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










**-------------------------------------------------------------------------------------------------------------------------------------------------------------------**


# OOPS Assignment Solutions

## Assignment: Shape Class Hierarchy
### Problem Statement
Create a base class `Shape` with methods to calculate the area and perimeter (pure virtual). Implement derived classes `Rectangle` and `Circle` that inherit from `Shape` and provide their own area and perimeter calculations.

### Coding Platform Used
- C++

### Approach and Solution Explanation
To solve the problem, we implemented an abstract base class named `Shape` that defines the interface for calculating the area and perimeter of different shapes. The derived classes `Rectangle` and `Circle` implement these methods to provide specific calculations for their respective shapes.

### Example Implementation
```cpp
#include <iostream>

using namespace std;

class Shape {
public:
    virtual double area() const = 0; // Pure virtual function for area
    virtual double perimeter() const = 0; // Pure virtual function for perimeter
};

class Rectangle : public Shape {
private:
    double length, width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double area() const override {
        return length * width; // Area of rectangle
    }

    double perimeter() const override {
        return 2 * (length + width); // Perimeter of rectangle
    }
};

class Circle : public Shape {
private:
    double radius;

public:
    Circle(double r) {
        radius = r;
    }

    double area() const override {
        return 3.14 * radius * radius; // Area of circle
    }

    double perimeter() const override {
        return 2 * 3.14 * radius; // Perimeter of circle
    }
};

int main() {
    Rectangle rect(5, 3); // Create a rectangle with length 5 and width 3
    Circle circ(4); // Create a circle with radius 4

    cout << "Rectangle Area: " << rect.area() << endl; // Display rectangle area
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl; // Display rectangle perimeter

    cout << "Circle Area: " << circ.area() << endl; // Display circle area
    cout << "Circle Perimeter: " << circ.perimeter() << endl; // Display circle perimeter

    return 0;
}




 


    

