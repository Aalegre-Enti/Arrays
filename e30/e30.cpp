// e30.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    int matrix[3][3] = {
        {3, 5, 6},
        {8, 9, 2},
        {1, 6, 2}
    };
    int rows = 3, cols = 3;
    int colSums[3];
    int i, j, k, temp;

    std::cout << "Original matrix:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << "\n";
    }

    // Calculate column sums
    for (j = 0; j < cols; j++) {
        colSums[j] = 0;
        for (i = 0; i < rows; i++)
            colSums[j] += matrix[i][j];
    }

    std::cout << "\nColumn sums: ";
    for (j = 0; j < cols; j++)
        std::cout << colSums[j] << " ";

    // Sort columns based on sums (descending order)
    for (i = 0; i < cols - 1; i++) {
        for (j = i + 1; j < cols; j++) {
            if (colSums[i] < colSums[j]) {
                // Swap sums
                temp = colSums[i];
                colSums[i] = colSums[j];
                colSums[j] = temp;

                // Swap corresponding columns in the matrix
                for (k = 0; k < rows; k++) {
                    temp = matrix[k][i];
                    matrix[k][i] = matrix[k][j];
                    matrix[k][j] = temp;
                }
            }
        }
    }

    std::cout << "\nColumn sums sorted descending: ";
    for (j = 0; j < cols; j++)
        std::cout << colSums[j] << " ";

    std::cout << "\nMatrix after sorting columns by sums:\n";
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            std::cout << matrix[i][j] << "\t";
        std::cout << "\n";
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
