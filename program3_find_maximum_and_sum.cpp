#include <iostream>
#include <vector>
#include <limits>

int main() {
    int rows, cols;
    std::cout << "Enter number of rows and columns: ";
    std::cin >> rows >> cols;
    if (rows <= 0 || cols <= 0) {
        std::cout << "Invalid matrix dimensions.\n";
        return 1;
    }

    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    int maximum = std::numeric_limits<int>::min();
    long long sum = 0;

    std::cout << "Enter matrix elements:\n";
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            std::cin >> matrix[i][j];
            if (matrix[i][j] > maximum) {
                maximum = matrix[i][j];
            }
            sum += matrix[i][j];
        }
    }

    std::cout << "Maximum element in the matrix: " << maximum << '\n';
    std::cout << "Sum of all elements in the matrix: " << sum << '\n';

    return 0;
}
