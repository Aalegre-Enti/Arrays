// e20.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>

int main() {
    int numbers[] = { 3, 5, 7 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int newNumber, position;

    // Show initial array
    std::cout << "Initial array: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;

    // Ask the user for number and position
    std::cout << "Enter a number: ";
    std::cin >> newNumber;
    std::cout << "Enter the position to remove (0 - " << size - 1 << "): ";
    std::cin >> position;

    // Shift elements to "delete" at given position
    for (int i = position; i < size - 1; i++) {
        numbers[i] = numbers[i + 1];
    }

    // Insert the new number at the last position
    numbers[size - 1] = newNumber;

    // Show updated array
    std::cout << "Updated array: ";
    for (int i = 0; i < size; i++) {
        std::cout << numbers[i] << " ";
    }
    std::cout << std::endl;
}




// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
