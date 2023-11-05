#include <filesystem>   // std::filesystem

#include <fmt/core.h>
#include <vector>
#include <iostream>

template <typename T>
auto print(std::vector<T> vec) -> void {
    for (auto element : vec) {
        std::cout << element << ' ';
    }
    std::cout << '\n';
}

auto printsmth(auto cos) -> void {
    std::cout << cos << '\n';
}

// std->vector

auto main() -> int {
    auto a = std::vector<int>{1,2,3};
    print(a);

    int x;
    x+=5;
    fmt::println("{}",x);
}