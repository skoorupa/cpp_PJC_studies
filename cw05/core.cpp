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
        return &matrix;
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

    auto get_item(int row, int col) {
        return matrix.at(row).at(col);
    }
    auto operator+(Matrix<T>& m2) {
        auto result = matrix;
        for (int i = 0; i < result.size(); ++i) {
            auto &row = result.at(i);
            for (int j = 0; j < row.size(); ++j) {
                auto &elem = row.at(j);
                elem = elem + m2.get_item(i,j);
            }
        }
        return Matrix(result);
    }
};

auto main() -> int {
    fmt::println("m1");
    auto m1 = Matrix(3,5,2);

    fmt::println("m2");
    auto m2 = Matrix(3,5,3);

    fmt::println("m3");
    auto m3 = m1+m2;

    fmt::println("{}",m1.as_string());
    fmt::println("{}",m2.as_string());
    fmt::println("{}",m3.as_string());



    return 0;
}