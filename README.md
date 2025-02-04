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

cpp
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

## Problem Statement
2. Create a base class `Shape` with methods to calculate the area and perimeter (pure virtual). Implement derived classes `Rectangle` and `Circle` that inherit from `Shape` and provide their own area and perimeter calculations.

## Coding Platform Used
- C++

## Approach and Solution Explanation
To solve the problem, we implemented an abstract base class named `Shape` that defines the interface for calculating the area and perimeter of different shapes. The derived classes `Rectangle` and `Circle` implement these methods to provide specific calculations for their respective shapes.

### Class Structure
1. **Base Class: `Shape`**
   - This is an abstract class that contains two pure virtual methods:
     - `area()`: A method to calculate the area of the shape.
     - `perimeter()`: A method to calculate the perimeter of the shape.

2. **Derived Class: `Rectangle`**
   - Inherits from `Shape`.
   - Contains private attributes for `length` and `width`.
   - Implements the `area()` method to return the area of the rectangle.
   - Implements the `perimeter()` method to return the perimeter of the rectangle.

3. **Derived Class: `Circle`**
   - Inherits from `Shape`.
   - Contains a private attribute for `radius`.
   - Implements the `area()` method to return the area of the circle.
   - Implements the `perimeter()` method to return the perimeter of the circle.

### Example Implementation

Here is the implementation of the `Shape`, `Rectangle`, and `Circle` classes in C++:

cpp
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


**-------------------------------------------------------------------------------------------------------------------------------------------------**

# Assignment_BTech2026_[2201921530066]

## Problem Statement

Create a class `Person` that includes a static member variable `count` to keep track of the number of instances created. The class should have the following features:
- A constructor that initializes the name of the person and increments the `count` each time a new instance is created.
- A static method `getCount()` that returns the current value of `count`.
- A method `getName()` that returns the name of the person.

## Coding Platform Used

- C++ (VS CODE)

## Approach and Solution Explanation

1. **Class Definition**: 
   - The `Person` class is defined with a private member variable `name` to store the name of the person and a static member variable `count` to keep track of the number of `Person` instances created.

2. **Constructor**:
   - The constructor takes a string parameter `n` to initialize the `name` variable. Each time a new `Person` object is instantiated, the constructor increments the static `count` variable by 1.

3. **Static Method**:
   - The static method `getCount()` is defined to return the current value of the `count` variable. This method can be called without creating an instance of the `Person` class.

4. **Instance Method**:
   - The method `getName()` is defined to return the name of the person. This method is called on an instance of the `Person` class.

5. **Static Member Initialization**:
   - The static member variable `count` is initialized to 0 outside the class definition.

6. **Main Function**:
   - In the `main()` function, two instances of the `Person` class are created: `person1` with the name "Alice" and `person2` with the name "Bob".
   - The total number of `Person` instances created is printed using the `getCount()` method.
   - The names of the created persons are printed using the `getName()` method.

### Code Example

cpp
#include <iostream>
#include <string>

class Person {
private:
    std::string name;
    static int count;

public:
    Person(std::string n) {
        name = n;
        count = count + 1;
    }

    static int getCount() {
        return count;
    }

    std::string getName() const {
        return name;
    }
};

int Person::count; 
Person::count = 0;

int main() {
    Person person1("Alice");
    Person person2("Bob");

    std::cout << "Total Persons: " << Person::getCount() << std::endl;
    std::cout << person1.getName() << std::endl;
    std::cout << person2.getName() << std::endl;

    return 0;
}


**------------------------------------------------------------------------------------------------------------------------------------------------------------------**

# README.md

# Assignment_BTech2026_[2201921530066]

## Problem Statement

Create a class `Employee` with attributes `name` and `salary`. Implement overloaded operators `+` and `-` to combine and compare employees based on their salaries. The class should support the following functionalities:
- Comparing two employees based on their salaries using the `<` and `>` operators.
- Combining the salaries of two employees using the `+` operator to create a new `Employee` object with a combined salary.
- Calculating the difference in salaries between two employees using the `-` operator to create a new `Employee` object with the salary difference.

## Coding Platform Used

- C++ (GCC Compiler)

## Approach and Solution Explanation

1. **Class Definition**:
   - The `Employee` class is defined with two private member variables: `name` (a string) to store the employee's name and `salary` (a double) to store the employee's salary.

2. **Constructor**:
   - The constructor initializes the `name` and `salary` attributes using an initializer list.

3. **Getter Method**:
   - The `getSalary()` method is defined to return the salary of the employee.

4. **Operator Overloading**:
   - The `<` operator is overloaded to compare the salaries of two `Employee` objects. It returns `true` if the salary of the current object is less than that of the other object.
   - The `>` operator is overloaded similarly to compare salaries in the opposite direction.
   - The `+` operator is overloaded to combine the salaries of two `Employee` objects. It returns a new `Employee` object with the name "Combined" and the total salary.
   - The `-` operator is overloaded to calculate the difference in salaries between two `Employee` objects. It returns a new `Employee` object with the name "Difference" and the absolute difference in salary.

5. **Main Function**:
   - In the `main()` function, two `Employee` objects are created: `emp1` with the name "Alice" and a salary of 5000, and `emp2` with the name "Bob" and a salary of 6000.
   - The program compares the salaries of the two employees and prints which employee has a higher salary.
   - The combined salary of both employees is calculated using the `+` operator, and the result is printed.
   - The salary difference is calculated using the `-` operator, and the result is printed.

### Code Example

cpp
#include <iostream>
#include <string>

using namespace std;

class Employee {
private:
    string name;
    double salary;

public:
    Employee(string n, double s) : name(n), salary(s) {}

    double getSalary() const {
        return salary;
    }

    bool operator<(const Employee& other) const {
        return salary < other.salary;
    }

    bool operator>(const Employee& other) const {
        return salary > other.salary;
    }

    Employee operator+(const Employee& other) const {
        return Employee("Combined", salary + other.salary);
    }

    Employee operator-(const Employee& other) const {
        return Employee("Difference", salary - other.salary);
    }
};

int main() {
    Employee emp1("Alice", 5000);
    Employee emp2("Bob", 6000);

    if (emp1 < emp2) {
        cout << "Bob has a higher salary than Alice." << endl;
    } else {
        cout << "Alice has a higher salary than Bob." << endl;
    }

    Employee combined = emp1 + emp2;
    cout << "Combined Salary: " << combined.getSalary() << endl;

    Employee difference = emp1 - emp2;
    cout << "Salary Difference: " << difference.getSalary() << endl;

    return 0;
}
**----------------------------------------------------------------------------------------------------------------------------------------------------------------**
# Time Class in C++

## Problem Statement  
Create a class `Time` with attributes `hours` and `minutes`. Implement functionality to display time in the format `"hh:mm"`.  

## Approach  
- Define a `Time` class with private attributes `hours` and `minutes`.  
- Implement a constructor to initialize these attributes.  
- Create a `display()` method to print the time in the `"hh:mm"` format.  
- Ensure proper formatting by adding a leading zero if `minutes < 10`.  
- Demonstrate the functionality in the `main()` function.  

## Code Example  

cpp
#include <iostream>

class Time {
    int hours, minutes;
public:
    Time(int h, int m);
    void display() const;
};

Time::Time(int h, int m) : hours(h), minutes(m) {}

void Time::display() const {
    std::cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes;
}

int main() {
    Time time(14, 30);
    std::cout << "Time: ";
    time.display();
    std::cout << std::endl;
    return 0;
}

**-----------------------------------------------------------------------------------------------------------------------------------------------------**
# Student Struct Implementation

## Problem Statement

You are required to create a struct named `Student` that represents the details of a student. The struct should contain the following fields:

- `age`: an integer representing the age of the student.
- `first_name`: a string consisting of lower-case Latin characters ('a'-'z') representing the first name of the student.
- `last_name`: a string consisting of lower-case Latin characters ('a'-'z') representing the last name of the student.
- `standard`: an integer representing the standard (grade) of the student.

The program should read the details of a student from the input and then output the details in a single line, with each field separated by a space.

### Input Format

The input will consist of four lines:
1. An integer representing the age.
2. A string representing the first name of the student.
3. A string representing the last name of the student.
4. An integer representing the standard of the student.

**Note**: The number of characters in `first_name` and `last_name` will not exceed 50.

### Output Format

The output will be a single line consisting of `age`, `first_name`, `last_name`, and `standard`, each separated by a single space.

## Approach Used

1. **Struct Definition**: A struct named `Student` is defined to encapsulate the details of a student. This struct contains four fields: `age`, `first_name`, `last_name`, and `standard`.

2. **Input Handling**: The program uses standard input to read the values for each field of the `Student` struct. This is done using `cin` for reading the integer and string values.

3. **Output Formatting**: After reading the input, the program outputs the details of the student in a single line, ensuring that each field is separated by a space. This is achieved using `cout`.

4. **Data Types**: Appropriate data types are used for each field in the struct to ensure that the data is stored correctly (e.g., `int` for age and standard, `string` for names).

## Platform Used

This implementation is done in **C++**. The code is designed to be run in any standard C++ environment, such as:
- Microsoft Visual Studio
- Online C++ compilers (e.g., HackerRank, LeetCode)


### Explanation:
- The first line of input `20` represents the age of the student.
- The second line `john` is the first name of the student.
- The third line `doe` is the last name of the student.
- The fourth line `12` represents the standard (grade) of the student.

The output combines all these details into a single line, formatted as specified.

## Code Implementation

Here is a sample implementation of the `Student` struct in C++:

cpp
#include <iostream>
#include <string>

using namespace std;

// Define the Student struct
struct Student {
    int age;
    string first_name;
    string last_name;
    int standard;
};

int main() {
    // Create a Student object
    Student student;

    // Input the details of the student
    cin >> student.age;
    cin >> student.first_name;
    cin >> student.last_name;
    cin >> student.standard;

    // Output the details of the student
    cout << student.age << " " 
         << student.first_name << " " 
         << student.last_name << " " 
         << student.standard << endl;

    return 0;
}
 


    

