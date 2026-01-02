#include <iostream>
using namespace std;
// Base class
class Person {
public:
    string name;
    int age;

    // Constructor to initialize name and age
    Person(string n, int a) {
        name = n;
        age = a;
    }
};
// Derived class Student
class Student : public Person {
public:
    int roll;
    float gpa;

    // Constructor for Student
    Student(string n, int a, int r, float g) : Person(n, a) {
        roll = r;
        gpa = g;
    }
    // Display function for Student
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Roll No: " << roll << endl;
        cout << "GPA: " << gpa << endl;
        cout << "----------------------" << endl;
    }
};

// Derived class Teacher
class Teacher : public Person {
public:
    string subject;
    float salary;

    // Constructor for Teacher
    Teacher(string n, int a, string sub, float sal) : Person(n, a) {
        subject = sub;
        salary = sal;
    }

    // Display function for Teacher
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
        cout << "----------------------" << endl;
    }
};

int main() {
    // Task 4: Create at least two Student objects
    Student s1("Ali", 20, 1, 3.4);
    Student s2("Sara", 21, 2, 3.8);

    // Display student info
    s1.display();
    s2.display();

    // Task 3: Create a Teacher object
    Teacher t1("Mr. Khan", 40, "Mathematics", 50000);
    t1.display();

    return 0;
}
