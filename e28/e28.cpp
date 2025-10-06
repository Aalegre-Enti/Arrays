// e28.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[10] = { 4, 7, 9, 2, 5, 8, 3, 6, 11, 10 };
    int size = 10;
    int i;
    int result = 0;

    std::cout << "Array elements: ";
    for (i = 0; i < size; i++)
        std::cout << numbers[i] << " ";

    // Add elements in odd positions (index 1, 3, 5, ...)
    for (i = 1; i < size; i += 2)
        result += numbers[i];

    // Subtract odd numbers located in even positions (index 0, 2, 4, ...)
    for (i = 0; i < size; i += 2)
        if (numbers[i] % 2 != 0)
            result -= numbers[i];

    std::cout << "\nFinal result: " << result << "\n";
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
