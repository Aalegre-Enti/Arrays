// e08.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    // Define a 3x4 matrix (3 rows, 4 columns)
    int matrix[3][4] = {
        {5,  8, 12, 4},
        {7,  3, 15, 9},
        {2, 10,  6, 1}
    };

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    // Process each column
    for (int col = 0; col < cols; col++) {
        int max = matrix[0][col];
        int min = matrix[0][col];

        // Traverse the rows in the current column
        for (int row = 1; row < rows; row++) {
            if (matrix[row][col] > max) {
                max = matrix[row][col];
            }
            if (matrix[row][col] < min) {
                min = matrix[row][col];
            }
        }

        std::cout << "Column " << col
            << " -> Max: " << max
            << ", Min: " << min
            << std::endl;
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
