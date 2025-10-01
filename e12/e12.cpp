// e12.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
    // Example: 3x3 identity matrix
    int matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };

    int rows = sizeof(matrix) / sizeof(matrix[0]);
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]);

    bool isIdentity = true;

    // Check if the matrix is square
    if (rows != cols) {
        isIdentity = false;
    }
    else {
        // Check identity condition
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (i == j && matrix[i][j] != 1) {
                    isIdentity = false;
                    break;
                }
                if (i != j && matrix[i][j] != 0) {
                    isIdentity = false;
                    break;
                }
            }
        }
    }

    // Show result
    if (isIdentity) {
        std::cout << "The matrix is an identity matrix." << std::endl;
    }
    else {
        std::cout << "The matrix is NOT an identity matrix." << std::endl;
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
