/*
    CS-11 SI Practice Midterm Practicum, reverseArray.cpp
    Purpose: Practice creating, storing, and looping through arrays.

    @author Your Name
    @version 1.0  00/00/2024
 */
#include <iostream>
using namespace std;

int main() {
    // int arr[] = { 4, 5, 6, 7, 8, 9 };
    int num;
    cout << "Enter the size of the array: ";
    cin >> num;

    const int SIZE = num;
    int arr[SIZE]; // Creates an integer array of user entered size

    cout << "Enter " << SIZE << " integers:\n";
    // Loop through the array and store user entered values at each index
    for (int i = 0; i < SIZE; i++) {
        cin >> arr[i];
    }

    cout << "\nArray elements in reverse order:\n";
    // Loop through array in reverse and print values
    for (int i = SIZE - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}