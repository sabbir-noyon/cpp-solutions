#include <iostream>
#include <vector>

using namespace std;

// function to multiply two matrices
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2, int row1, int col1, int row2, int col2) {
    
    if (col1 != row2) {
        cout << "Matrix multiplication is not possible!" << endl;
        exit(0);
    }

    vector<vector<int>> result(row1, vector<int>(col2, 0)); 

    // multiply the matrices
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            for (int k = 0; k < col1; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return result;
}

// function to display matrix
void displayMatrix(const vector<vector<int>>& matrix, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int row1, col1, row2, col2;

    cout << "Enter dimensions of matrix 1 (rows and columns): ";
    cin >> row1 >> col1;

    cout << "Enter dimensions of matrix 2 (rows and columns): ";
    cin >> row2 >> col2;

    vector<vector<int>> mat1(row1, vector<int>(col1));
    vector<vector<int>> mat2(row2, vector<int>(col2));

    cout << "Enter elements of matrix 1: " << endl;
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col1; j++) {
            cin >> mat1[i][j];
        }
    }

    cout << "Enter elements of matrix 2: " << endl;
    for (int i = 0; i < row2; i++) {
        for (int j = 0; j < col2; j++) {
            cin >> mat2[i][j];
        }
    }

    vector<vector<int>> result = multiplyMatrices(mat1, mat2, row1, col1, row2, col2);

    cout << "Product of the matrices: " << endl;
    displayMatrix(result, row1, col2);

    return 0;
}
