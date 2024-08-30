#include <iostream>
#include <vector>

using namespace std;

void printMatrixInWaveForm(const vector<vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    for (int j = 0; j < cols; ++j) {
        if (j % 2 == 0) {
            // Traverse down for even index columns
            for (int i = 0; i < rows; ++i) {
                cout << matrix[i][j] << " ";
            }
        } else {
            // Traverse up for odd index columns
            for (int i = rows - 1; i >= 0; --i) {
                cout << matrix[i][j] << " ";
            }
        }
    }
    cout << endl;
}

int main() {
    // Define the matrix
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Print the matrix in wave form
    printMatrixInWaveForm(matrix);

    return 0;
}
