// e25.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[10] = { 3, 7, 2, 7, 5, 3, 9, 2, 8, 3 };
    int i, j;
    int size = 10;

    std::cout << "Original array: ";
    for (i = 0; i < size; i++)
        std::cout << numbers[i] << " ";

    // Replace all repeated numbers with 0
    for (i = 0; i < size; i++) {
        int original = numbers[i];
        if (original != 0) {
            for (j = i + 1; j < size; j++) {
                if (original == numbers[j]) {
                    numbers[j] = 0;    // Replace the duplicate
                    numbers[i] = 0;    // Replace the original too
                }
            }
        }
    }

    std::cout << "\nArray after replacing duplicates with 0: ";
    for (i = 0; i < size; i++)
        std::cout << numbers[i] << " ";

    std::cout << "\n";
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
