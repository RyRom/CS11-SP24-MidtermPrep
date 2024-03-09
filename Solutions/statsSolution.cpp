/*
    CS-11 SI Practice Midterm Practicum, stats.cpp
    Purpose: Practice creating, storing, and looping through arrays.

    @author Your Name
    @version 1.0  00/00/2024
 */
#include <iostream>
#include <iomanip> // for setprecision, show specific number of digits after decimal
using namespace std;

int main() {
    int num;
    cout << "Enter the size of the array: ";
    cin >> num;
    
    const int SIZE = num;
    double arr[SIZE]; // Creates an array of doubles to store floating point numbers

    // Loop through array and read in values
    double temp; // Alternate way to populate array, temporarily store in variable and then assign
    double sum = 0; // Make sure to initialize
    cout << "Enter " << SIZE << " floating-point numbers:\n";
    for (int i = 0; i < SIZE; i++) {
        cin >> temp;
        arr[i] = temp;
        sum += temp; // Running sum of values
    }

    // Calculate and print
    cout << "\nSum of elements: " << fixed << setprecision(1) << sum << endl;
    cout << "Average of elements: " << sum / SIZE << endl;

    return 0;
}