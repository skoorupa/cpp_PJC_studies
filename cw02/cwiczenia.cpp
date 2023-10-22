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

    std::ranges::sort(vec, {}, std::ranges::size);
    fmt::println("{}",vec);

    auto vec_num = std::vector<int> {1,3,5,7,2,4,6};
    std::ranges::sort(vec_num,std::ranges::greater());

    fmt::println("{}",vec_num);
    auto f = std::ranges::find_if(vec_num,[](auto x) {return x%2==0;});
    fmt::println("{}",*f);
}