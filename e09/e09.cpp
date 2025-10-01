// e09.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[] = { 4, 7, 10, 13, 16, 21, 28 };
    int size = sizeof(numbers) / sizeof(numbers[0]);

    int evenCount = 0;

    // Traverse the array
    for (int i = 0; i < size; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount = evenCount + 1;
        }
    }

    std::cout << "The array contains " << evenCount << " even numbers." << std::endl;
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
