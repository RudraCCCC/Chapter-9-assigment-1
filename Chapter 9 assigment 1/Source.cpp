//Rudra Patel. 10/30/2024.
// This code creates a new integer array that is one element larger than a 
// given array, with the first element set to 0 and the remaining elements 
// copied from the original array. It then prints this new array and frees 
// the allocated memory after use to prevent memory leaks.
// AI

#include <iostream>

using namespace std; // Make sure to include this to use cout

int* OGArray(const int* array, int size) {
    // Allocate new array with one extra element
    int* newArray = new int[size + 1];

    newArray[0] = 0; // Set the first element to 0

    // Copy elements from the original array to the new array
    for (int i = 0; i < size; ++i) {
        newArray[i + 1] = array[i];
    }

    return newArray; // Return the new array
}

int main() {
    // Original array
    int array[] = { 1, 2, 3, 4 };
    int size = sizeof(array) / sizeof(array[0]); // Calculate size

    // Create the new array
    int* newArray = OGArray(array, size);

    // Print the new array
    for (int i = 0; i < size + 1; ++i) {
        cout << newArray[i] << " "; // Use cout to output values
    }
    cout << endl;

    // Free the allocated memory
    delete[] newArray;

    return 0;
}