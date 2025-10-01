// e18.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    // Example 3x3 magic square
    int matrix[3][3] = {
        {2, 7, 6},
        {9, 5, 1},
        {4, 3, 8}
    };

    int n = sizeof(matrix) / sizeof(matrix[0]);

    // Calculate reference sum (first row)
    int magicSum = 0;
    for (int j = 0; j < n; j++) {
        magicSum += matrix[0][j];
    }

    bool isMagic = true;

    // Check sums of all rows
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != magicSum) {
            isMagic = false;
        }
    }

    // Check sums of all columns
    for (int j = 0; j < n; j++) {
        int colSum = 0;
        for (int i = 0; i < n; i++) {
            colSum += matrix[i][j];
        }
        if (colSum != magicSum) {
            isMagic = false;
        }
    }

    // Check main diagonal
    int diag1 = 0;
    for (int i = 0; i < n; i++) {
        diag1 += matrix[i][i];
    }
    if (diag1 != magicSum) {
        isMagic = false;
    }

    // Check secondary diagonal
    int diag2 = 0;
    for (int i = 0; i < n; i++) {
        diag2 += matrix[i][n - 1 - i];
    }
    if (diag2 != magicSum) {
        isMagic = false;
    }

    // Show result
    if (isMagic) {
        std::cout << "The matrix is a magic square." << std::endl;
    }
    else {
        std::cout << "The matrix is NOT a magic square." << std::endl;
    }
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
