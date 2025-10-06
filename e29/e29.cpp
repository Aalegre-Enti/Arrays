// e29.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[8] = { 12, 5, 9, 20, 3, 7, 15, 10 };
    int size = 8;
    int i;
    int max = numbers[0];
    int min = numbers[0];
    int result;

    std::cout << "Array elements: ";
    for (i = 0; i < size; i++)
        std::cout << numbers[i] << " ";

    // Find the largest and smallest elements
    for (i = 1; i < size; i++) {
        if (numbers[i] > max)
            max = numbers[i];
        if (numbers[i] < min)
            min = numbers[i];
    }

    result = max * min;

    std::cout << "\nLargest element: " << max;
    std::cout << "\nSmallest element: " << min;
    std::cout << "\nResult of multiplication: " << result << "\n";
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
