#include <iostream>
using namespace std;

// ==================== Rectangle Class ====================
class Rectangle {
    int length, width;

public:
    // Constructor
    Rectangle(int l, int w) {
        length = l;
        width = w;
    }

    // Display function (Task 5)
    void display() {
        cout << "Length = " << length << ", Width = " << width << endl;
    }

    // Area
    int area() {
        return length * width;
    }

    // Perimeter (Task 2)
    int perimeter() {
        return 2 * (length + width);
    }
};

// ==================== Square Class (Task 6) ====================
class Square {
    int side;

public:
    Square(int s) {
        side = s;
    }

    int area() {
        return side * side;
    }
};

// ==================== MAIN FUNCTION ====================
int main() {

    cout << "\n===== TASK 1 & 2: Rectangle with Area & Perimeter =====\n";
    Rectangle r(4, 5);
    r.display();
    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;


    cout << "\n===== TASK 3: Three Rectangle Objects =====\n";
    Rectangle r1(2, 3);
    Rectangle r2(4, 5);
    Rectangle r3(6, 7);

    cout << "Rectangle 1: Area = " << r1.area() 
         << ", Perimeter = " << r1.perimeter() << endl;

    cout << "Rectangle 2: Area = " << r2.area() 
         << ", Perimeter = " << r2.perimeter() << endl;

    cout << "Rectangle 3: Area = " << r3.area() 
         << ", Perimeter = " << r3.perimeter() << endl;


    cout << "\n===== TASK 4: User Input Rectangle =====\n";
    int l, w;
    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    Rectangle userRect(l, w);
    userRect.display();
    cout << "Area = " << userRect.area() << endl;
    cout << "Perimeter = " << userRect.perimeter() << endl;


    cout << "\n===== TASK 6: Square Class =====\n";
    Square s(6);
    cout << "Square Area = " << s.area() << endl;


    cout << "\n===== TASK 7: Compare Two Rectangles =====\n";
    Rectangle c1(5, 10);
    Rectangle c2(7, 8);

    int a1 = c1.area();
    int a2 = c2.area();

    cout << "Rectangle 1 Area = " << a1 << endl;
    cout << "Rectangle 2 Area = " << a2 << endl;

    if (a1 > a2)
        cout << "Rectangle 1 has a bigger area." << endl;
    else if (a2 > a1)
        cout << "Rectangle 2 has a bigger area." << endl;
    else
        cout << "Both rectangles have equal area." << endl;

    return 0;
}
