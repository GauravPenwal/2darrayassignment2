#include <iostream>
#include <vector>

using namespace std;

void generateSpiralMatrix(int n) {
    // Create an n x n matrix initialized with 0
    vector<vector<int>> matrix(n, vector<int>(n, 0));
    
    int value = 1;          // Start filling the matrix with 1
    int top = 0;           // Top boundary of the spiral
    int bottom = n - 1;    // Bottom boundary of the spiral
    int left = 0;          // Left boundary of the spiral
    int right = n - 1;     // Right boundary of the spiral
    
    while (top <= bottom && left <= right) {
        // Fill the top row
        for (int i = left; i <= right; ++i) {
            matrix[top][i] = value++;
        }
        ++top;  // Move down the top boundary

        // Fill the right column
        for (int i = top; i <= bottom; ++i) {
            matrix[i][right] = value++;
        }
        --right; // Move left the right boundary

        // Fill the bottom row
        if (top <= bottom) { // Check if there is still a row to be filled
            for (int i = right; i >= left; --i) {
                matrix[bottom][i] = value++;
            }
            --bottom; // Move up the bottom boundary
        }

        // Fill the left column
        if (left <= right) { // Check if there is still a column to be filled
            for (int i = bottom; i >= top; --i) {
                matrix[i][left] = value++;
            }
            ++left; // Move right the left boundary
        }
    }
    
    // Print the matrix
    for (const auto& row : matrix) {
        for (int num : row) {
            cout << num << " ";
        }
        cout << endl;
    }
}

int main() {
    int n;
    cout << "Enter the size of the matrix (n x n): ";
    cin >> n;

    if (n <= 0) {
        cout << "Size of the matrix must be a positive integer." << endl;
        return 1;
    }

    generateSpiralMatrix(n);

    return 0;
}
