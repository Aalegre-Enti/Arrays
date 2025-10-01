// e05.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    // Define the size of the array
    int numbers[5] = { 2, 4, 6, 8, 10 };

    int multiplier;

    // Ask the user for a number
    std::cout << "Enter a number to multiply the array elements: ";
    std::cin >> multiplier;

    // Multiply each element
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
        numbers[i] = numbers[i] * multiplier;
    }

    // Display the result
    std::cout << "The new array is: ";
    for (int i = 0; i < sizeof(numbers) / sizeof(int); i++) {
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
