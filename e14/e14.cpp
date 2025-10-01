// e14.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define size 5
int main() {
    int source[] = { 5, 10, 15, 20, 25 };
    int destination[size];

    // Copy elements one by one
    for (int i = 0; i < size; i++) {
        destination[i] = source[i];
    }

    // Show copied elements
    std::cout << "Elements in destination array: ";
    for (int i = 0; i < size; i++) {
        std::cout << destination[i] << " ";
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
