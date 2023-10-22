//
// Created by adams on 22.10.2023.
//
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <vector>
#include <algorithm>
#include <set>

namespace pjc {
    namespace ranges {
        auto flatten(auto source) {
            auto result = std::vector<int>{};
            for (auto v : source)
                for (auto n : v)
                    result.push_back(n);
            return result;
        }

        typename (typedef T)
        auto drop(auto collection, int n) {
            auto result = std::vector<auto n>
        }
    }
}

auto main() -> int {
    auto source1 = std::vector<std::set<int>>{
            {10},
            {1, 2, 3},
            {5, 6},
            {4},
            {7, 8, 9}
    };

    auto source2 = std::set<std::set<int>>{
            {10},
            {3, 2, 1},
            {6, 5},
            {4},
            {8, 7, 9}
    };

    fmt::println("{}", pjc::ranges::flatten(source1));
    fmt::println("{}", pjc::ranges::flatten(source2));
}