//
// Created by adams on 20.10.2023.
//

#include <fmt/core.h>
#include <fmt/ranges.h>
#include <vector>
#include <algorithm>

auto main() -> int {
    auto vec = std::vector<std::string>{"adam","mikolaj","barbara","tadeusz","ola","amadeusz","zenon"};
    fmt::println("{}",vec);

    std::ranges::sort(vec);
    fmt::println("{}",vec);

    std::ranges::sort(vec, std::ranges::less(), std::ranges::size);
    fmt::println("{}",vec);
}