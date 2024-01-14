#include <fmt/core.h>

struct Point {
    int x;
    int y;
};

auto main() -> int {
    auto [a, b] = Point(1, 2);
    fmt::println("{} {}", a, b);
}