#include <iostream>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <string>
#include <vector>

auto print() {

}

auto main() -> int {
    auto vec = std::vector<int> {5,7,8,91,2};
    auto str = std::vector<std::string>{"Ala","ma","kota"};

    fmt::println("front -> {}",vec.front());
    fmt::println("begin -> {}",*vec.begin());
    fmt::println("back -> {}",vec.back());
    fmt::println("end -> {}",*(vec.end()-1));
}