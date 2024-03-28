// Exam.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using std::cout;
using std::endl;

template <class T>
class Rectangle {
private:
    T a;
    T b;
public:

    Rectangle() : a(0.), b(0.) {};
    Rectangle(T a_, T b_) : a{ a_ }, b{ b_ } { };
    Rectangle(const Rectangle& obj) { a = obj.a; b = obj.b; };
    ~Rectangle() { a = 0.; b = 0.; };

    T S() { return a * b; };
    T P() { return 2 * (a * b); };

};

int main()
{
    Rectangle<int> rectangle(3, 4);

    cout << "Result: " << endl;
    cout << "S: " << rectangle.S() << endl;
    cout << "P: " << rectangle.P() << endl;

    return 0;
}
