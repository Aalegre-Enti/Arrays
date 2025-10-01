// e13.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[] = { 4, 7, 12, 9, 21, 15 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int target;
    bool found = false;

    std::cout << "Enter the number to search: ";
    std::cin >> target;

    // Search for the element
    for (int i = 0; i < size; i++) {
        if (numbers[i] == target) {
            std::cout << "Number found at position (index): " << i << std::endl;
            found = true;
            break; // stop after finding the first occurrence
        }
    }

    if (!found) {
        std::cout << "Number not found in the array." << std::endl;
    }
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
