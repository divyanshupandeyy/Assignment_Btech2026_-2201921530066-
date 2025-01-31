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
