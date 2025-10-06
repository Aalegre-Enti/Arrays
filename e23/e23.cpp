// e23.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int rows = 3, cols = 4;
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    int col1, col2, i, temp;

    std::cout << "Original matrix:\n";
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << "\n";
    }

    std::cout << "\nEnter first column to swap (0-" << cols - 1 << "): ";
    std::cin >> col1;
    std::cout << "Enter second column to swap (0-" << cols - 1 << "): ";
    std::cin >> col2;

    // Swap the selected columns
    for (i = 0; i < rows; i++) {
        temp = matrix[i][col1];
        matrix[i][col1] = matrix[i][col2];
        matrix[i][col2] = temp;
    }

    std::cout << "\nMatrix after swapping columns " << col1 << " and " << col2 << ":\n";
    for (i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << "\n";
    }

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
