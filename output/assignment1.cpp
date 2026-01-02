#include <iostream>
#include <cmath>
using namespace std;

// ---------- Q4. Function to check Armstrong number ----------
bool isArmstrong(int num) {
    int originalNum = num;
    int sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += pow(digit, 3);
        num /= 10;
    }
    return (sum == originalNum);
}

// ---------- MAIN PROGRAM ----------
int main() {

    // ---------- Q1. Print name, registration number, and course ----------
    cout << "Q1. Print name, registration number, and course name:\n";
    cout << "Name: Naseer Ahmed\n";
    cout << "Registration Number: 12345\n";
    cout << "Course: Software Construction\n\n";


    // ---------- Q2. Input name, roll number, GPA of 3 students ----------
    cout << "Q2. Input name, roll number, and GPA of 3 students:\n";
    string name;
    int rollNumber;
    float gpa;
    for (int i = 1; i <= 3; i++) {
        cout << "\nStudent " << i << ":\n";
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Roll Number: ";
        cin >> rollNumber;
        cout << "Enter GPA: ";
        cin >> gpa;

        cout << "Student " << i << " Details: " << name 
             << " | Roll: " << rollNumber 
             << " | GPA: " << gpa << "\n";
    }
    cout << endl;


    // ---------- Q3. Calculate and display grade based on marks ----------
    cout << "Q3. Calculate and display grade based on marks:\n";
    int marks;
    cout << "Enter marks (0 - 100): ";
    cin >> marks;

    if (marks >= 90 && marks <= 100)
        cout << "Grade: A+\n";
    else if (marks >= 80)
        cout << "Grade: A\n";
    else if (marks >= 70)
        cout << "Grade: B\n";
    else if (marks >= 60)
        cout << "Grade: C\n";
    else if (marks >= 50)
        cout << "Grade: D\n";
    else if (marks >= 0)
        cout << "Grade: F\n";
    else
        cout << "Invalid marks entered!\n";
    cout << endl;


    // ---------- Q4. Check Armstrong number ----------
    cout << "Q4. Check Armstrong number:\n";
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isArmstrong(number))
        cout << number << " is an Armstrong number.\n";
    else
        cout << number << " is NOT an Armstrong number.\n";
    cout << endl;


    // ---------- Q5. Array of 10 elements: Find max & min ----------
    cout << "Q5. Create an array of 10 integers and find max & min:\n";
    int arr[10];
    cout << "Enter 10 integers: ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int maxVal = arr[0];
    int minVal = arr[0];
    for (int i = 1; i < 10; i++) {
        if (arr[i] > maxVal)
            maxVal = arr[i];
        if (arr[i] < minVal)
            minVal = arr[i];
    }

    cout << "Maximum value = " << maxVal << endl;
    cout << "Minimum value = " << minVal << endl << endl;


    // ---------- Q6. Linear search ----------
    cout << "Q6. Linear Search:\n";
    int key;
    cout << "Enter a value to search in the array: ";
    cin >> key;
    bool found = false;
    for (int i = 0; i < 10; i++) {
        if (arr[i] == key) {
            cout << "Value found at index " << i << endl;
            found = true;
            break;
        }
    }
    if (!found)
        cout << "Value not found in the array.\n";
    cout << endl;


    // ---------- Q7. Bubble Sort ----------
    cout << "Q7. Sort array in ascending order using Bubble Sort:\n";
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Array after sorting in ascending order: ";
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
