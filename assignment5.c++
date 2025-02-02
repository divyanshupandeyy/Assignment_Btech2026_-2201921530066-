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
