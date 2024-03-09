/*
    CS-11 SI Practice Midterm Practicum, frequency.cpp
    Purpose: Practice looping through a string and using an if statement

    @author Your Name
    @version 1.0  00/00/2024
 */
#include <iostream>
using namespace std;

int main() {
    int frequency = 0; // Tracks occurences of letter
    string str; // User entered string
    char letter; // User entered letter

    cout << "Enter a string: ";
    getline(cin, str);
    cout << "Enter a letter to search for: ";
    cin >> letter;

    // Loop through str, and check if current char is equal to letter
    const int SIZE = str.length();
    /**
     * You can also cast int onto str.length() in the for loop
     * for (int i = 0; i < static_cast<int>(str.length()); i++) {
     *     // code
     * }
     */
    for (int i = 0; i < SIZE; i++) {
        if (str.at(i) == letter) {
            frequency++;
        }
    }

    cout << "\nFrequency of \'" << letter << "\': " << frequency << endl;

    return 0;
}