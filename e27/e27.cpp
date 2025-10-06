// e27.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[7] = { 3, 8, 5, 8, 3, 8, 3 }; // Example array
    int size = 7;
    int i;
    bool isPalindrome = true;

    std::cout << "Array elements: ";
    for (i = 0; i < size; i++)
        std::cout << numbers[i] << " ";

    // Check if the array is a palindrome
    for (i = 0; i < size / 2; i++) {
        if (numbers[i] != numbers[size - 1 - i]) {
            isPalindrome = false;
        }
    }

    std::cout << "\n";

    if (isPalindrome)
        std::cout << "The array IS a palindrome.\n";
    else
        std::cout << "The array is NOT a palindrome.\n";
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
