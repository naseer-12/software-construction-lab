#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare and initialize array
    int arr[5] = {5, 3, 8, 1, 2};
    int n = 5;

    // Step 2: Find max and min
    int max = arr[0], min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    // Step 3: Display before sorting
    cout << "Before Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Step 4: Bubble Sort (Ascending Order)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    // Step 5: Display after sorting
    cout << "After Sorting: ";
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;

    // Step 6: Display max and min
    cout << "Maximum: " << max << endl;
    cout << "Minimum: " << min << endl;

    return 0;
}
 