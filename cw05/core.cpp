#include <fmt/core.h>
#include <vector>

template <typename T>
class Matrix {
    std::vector<std::vector<T>> matrix;

public:
    Matrix(
            std::vector<std::vector<T>> vector
            ) : matrix(vector) {}
    Matrix(
            int rows,
            int columns,
            T defaultValue
            ) {
        matrix = std::vector<std::vector<T>>(rows);
        for (std::vector<T> &row : matrix)
            for (int i = 0; i < columns; ++i)
                row.push_back(defaultValue);
    }

    auto as_vector() {
        return matrix;
    }

    auto as_string() {
        auto result = std::string();
        for (std::vector<T> row : matrix) {
            for (T elem : row) {
                result += std::to_string(elem)+" ";
            }
            result += "\n";
        }
        return result;
    }
};

auto main() -> int {
    auto m1 = Matrix(3,5,0);
    fmt::println("{}",m1.as_string());

    return 0;
}