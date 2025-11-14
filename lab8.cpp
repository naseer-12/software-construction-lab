#include <iostream>
using namespace std;

// Task 1 & 4: Student Structure
struct Student {
    string name;
    int roll;
    float gpa;
};

// Task 2: Laptop Structure
struct Laptop {
    string brand;
    int ram;
    float price;
};

// Task 3: Rectangle Structure
struct Rectangle {
    float length;
    float width;
};

int main() {
    // ---------------- Task 1: Single Student ----------------
    Student s1;
    cout << "Task 1 - Enter name, roll, gpa for student: ";
    cin >> s1.name >> s1.roll >> s1.gpa;
    cout << "Student Info: " << s1.name << " " << s1.roll << " " << s1.gpa << endl;

    // ---------------- Task 2: Laptop ----------------
    Laptop l1;
    cout << "\nTask 2 - Enter laptop brand, ram(GB), price: ";
    cin >> l1.brand >> l1.ram >> l1.price;
    cout << "Laptop Specs: " << l1.brand << " " << l1.ram << "GB " << l1.price << "USD" << endl;

    // ---------------- Task 3: Rectangle ----------------
    Rectangle r1;
    cout << "\nTask 3 - Enter rectangle length and width: ";
    cin >> r1.length >> r1.width;
    cout << "Area: " << r1.length * r1.width << endl;
    cout << "Perimeter: " << 2 * (r1.length + r1.width) << endl;

    // ---------------- Task 4: Compare Two Students ----------------
    Student s2;
    cout << "\nTask 4 - Enter name, roll, gpa for student 1: ";
    cin >> s1.name >> s1.roll >> s1.gpa;
    cout << "Enter name, roll, gpa for student 2: ";
    cin >> s2.name >> s2.roll >> s2.gpa;

    if (s1.gpa > s2.gpa)
        cout << s1.name << " has higher GPA." << endl;
    else if (s2.gpa > s1.gpa)
        cout << s2.name << " has higher GPA." << endl;
    else
        cout << "Both students have equal GPA." << endl;

    return 0;
}
