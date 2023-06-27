#include <iostream>

void swap_rows(int** matrix, int m, int n) {
    for (int i = 0; i < m; i += 2) {
        int* tmp = matrix[i];
        matrix[i] = matrix[i + 1];
        matrix[i + 1] = tmp;
    }
}

void clear_matrix(int** matrix, int m) {
    for (int i = 0; i < m; ++i) {
        delete[] matrix[i];
    }
    delete[] matrix;
}

int main() {
    int m = 4;
    int n = 3;
    int** matrix = new int* [m];
    for (int i = 0; i < m; ++i) {
        matrix[i] = new int[n];
        for (int j = 0; j < n; ++j) {
            matrix[i][j] = i + 1;
        }
    }

    swap_rows(matrix, m, n);

    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            std::cout << matrix[i][j] << " ";
        }
        std::cout << std::endl;
    }

    clear_matrix(matrix, m);

    return 0;
}
