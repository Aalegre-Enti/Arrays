// e24.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int numbers[10] = { 4, 15, 8, 23, 42, 16, 7, 19, 23, 9 };
    int largest, secondLargest;
    int i;

    // Initialize the two largest values
    if (numbers[0] > numbers[1]) {
        largest = numbers[0];
        secondLargest = numbers[1];
    }
    else {
        largest = numbers[1];
        secondLargest = numbers[0];
    }

    // Find the second largest
    for (i = 2; i < 10; i++) {
        if (numbers[i] > largest) {
            secondLargest = largest;
            largest = numbers[i];
        }
        else if (numbers[i] > secondLargest && numbers[i] != largest) {
            secondLargest = numbers[i];
        }
    }

    std::cout << "Array elements: ";
    for (i = 0; i < 10; i++)
        std::cout << numbers[i] << " ";

    std::cout << "\nThe largest value is: " << largest;
    std::cout << "\nThe second largest value is: " << secondLargest << "\n";
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
