#include <iostream>
#include <vector>
#include <limits>

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    int minimum = std::numeric_limits<int>::max();

    std::cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
            if (matrix[i][j] < minimum) {
                minimum = matrix[i][j];
            }
        }
    }

    std::cout << "Minimum element in the matrix: " << minimum << '\n';

    return 0;
}
