#include <iostream>
using namespace std;

class Complex {
public:
    int r, i;

    // Constructor
    Complex(int a = 0, int b = 0) {
        r = a;
        i = b;
    }

    // =======================
    // Task 1: display() function
    // =======================
    void display() {
        cout << r << " + i" << i << endl;
    }

    // =======================
    // Task 3: Overload + operator
    // =======================
    Complex operator+(Complex c) {
        return Complex(r + c.r, i + c.i);
    }

    // =======================
    // Task 2: Overload - operator
    // =======================
    Complex operator-(Complex c) {
        return Complex(r - c.r, i - c.i);
    }
};

int main() {
    int r1, i1, r2, i2;

    // =======================
    // Task 3: User input
    // =======================
    cout << "Enter real and imaginary part of first complex number: ";
    cin >> r1 >> i1;

    cout << "Enter real and imaginary part of second complex number: ";
    cin >> r2 >> i2;

    Complex c1(r1, i1);
    Complex c2(r2, i2);

    // =======================
    // Task 3: Addition using + operator
    // =======================
    Complex sum = c1 + c2;
    cout << "Addition Result: ";
    sum.display();

    // =======================
    // Task 2: Subtraction using - operator
    // =======================
    Complex diff = c1 - c2;
    cout << "Subtraction Result: ";
    diff.display();

    return 0;
}
