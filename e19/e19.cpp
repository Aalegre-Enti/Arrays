// e19.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    const int size = 5; // cantidad de números que pediremos
    int numbers[size];

    for (int i = 0; i < size; i++) {
        int num;
        bool exists;

        do {
            std::cout << "Enter number " << (i + 1) << ": ";
            std::cin >> num;

            // check if number already exists
            exists = false;
            for (int j = 0; j < i; j++) {
                if (numbers[j] == num) {
                    exists = true;
                    std::cout << "That number already exists. Try again.\n";
                    break;
                }
            }
        } while (exists);

        numbers[i] = num;
    }

    // Show final array
    std::cout << "\nNumbers stored: ";
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
