#include <iostream>
#include <fmt/core.h>
#include <fmt/ranges.h>

auto main() -> int {
    std::cout << "Hello world" << std::endl;
    fmt::println("żółw");

    int x;
    std::cout << x;
}
