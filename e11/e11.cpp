// e11.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[5];

    // Ask the user to enter 5 numbers
    for (int i = 0; i < 5; i++) {
        std::cout << "Enter number " << (i + 1) << ": ";
        std::cin >> numbers[i];
    }

    int size = sizeof(numbers) / sizeof(numbers[0]);

    // Sort array in ascending order (simple bubble sort)
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (numbers[j] > numbers[j + 1]) {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    // Display sorted array
    std::cout << "\nNumbers sorted from smallest to largest:\n";
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
