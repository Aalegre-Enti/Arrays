// e22.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int first[5] = { 2, 4, 6, 8, 10 };
    int second[5] = { 1, 3, 5, 7, 9 };
    int result[5];
    int i;

    // Add elements from both arrays
    for (i = 0; i < 5; i++) {
        result[i] = first[i] + second[i];
    }

    std::cout << "First array: ";
    for (i = 0; i < 5; i++)
        std::cout << first[i] << " ";

    std::cout << "\nSecond array: ";
    for (i = 0; i < 5; i++)
        std::cout << second[i] << " ";

    std::cout << "\nResult array (sum): ";
    for (i = 0; i < 5; i++)
        std::cout << result[i] << " ";

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
