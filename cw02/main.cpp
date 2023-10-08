#include <iostream>
#include <fmt/core.h>
#include <fmt/ranges.h>
#include <string>
#include <vector>
#include <algorithm>

bool isEven(int n) {
    return n % 2 == 0;
}

auto isEvenAlaLambda (int n) {
    return n % 2 == 0;
}

auto main() -> int {
    auto vec = std::vector<int> {5,7,8,91,2,1};
    auto str = std::vector<std::string>{"Ala","ma","kota"};

    fmt::println("front -> {}",vec.front());
    fmt::println("begin -> {}",*vec.begin());
    fmt::println("back -> {}",vec.back());
    fmt::println("end -> {}\n",*(vec.end()-1));

    auto isEvenLambda = [](int n) -> bool {
        return n % 2 == 0;
    };

    fmt::println("isEven -> {}",isEven(4));
    fmt::println("isEvenAlaLambda -> {}",isEvenAlaLambda(4));
    fmt::println("isEvenLambda -> {}\n",isEvenLambda(4));

    fmt::println("vec -> {}",vec);
    std::ranges::sort(vec, std::ranges::greater());
    fmt::println("vec -> {}",vec);

    std::ranges::sort(vec, std::ranges::less());
    fmt::println("vec -> {}",vec);
    std::ranges::sort(vec, [](auto left, auto right){return left > right;});
    fmt::println("vec -> {}",vec);

    std::ranges::sort(vec, std::ranges::less());
    fmt::println("vec -> {}",vec);
    std::ranges::sort(
            vec,
            [](auto left, auto right){return left < right;},
            [](auto n) -> int {return n%2;}
            );
    fmt::println("vec -> {}",vec);

    std::ranges::sort(vec, std::ranges::less());


    auto q1 = std::ranges::find(vec, 4);
    fmt::println("vec 4 -> {}", q1 != vec.end());

    auto q2 = std::ranges::count_if(vec, [](auto n) -> bool {return n%2==0;});
    fmt::println("vec even -> {}", q2);
}