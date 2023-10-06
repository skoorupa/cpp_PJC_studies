#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include <fmt/ranges.h>

void showVec(std::vector<int> vec);
void modifyRef(int& x);

auto main() -> int {
    int x = 5;
    float pi = float(x);

    auto y = 2.7;
    auto y2 = int(y);

//    std::cout << x << "\n" << std::endl << "END";
    std::vector<int> vec = {1,2,3,54,23,41,8,9};
    showVec(vec);

    vec.push_back(666);
    showVec(vec);

    vec.pop_back();
    showVec(vec);

    auto str = std::string();
    std::cout << "input string\n";
    std::cin >> str;
    std::cout << str << std::endl;
//    std::cout << "middle-> " << str[str.size()/2] << std::endl;
//
//    std::ranges::reverse(str);
//    std::cout << "reverse-> " << str << std::endl;
//    std::ranges::sort(str);
//    std::cout << "sorted-> " << str << std::endl;

    int a = 5;
    auto& aa = a;

    modifyRef(a);
    std::cout << a;

    fmt::println("{}",vec);
    fmt::println("{} // {}",vec,str);
    fmt::println("{1} // {0}",vec,str);
}

void showVec(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << ",\t";
    }
    std::cout << std::endl;
}

void modifyRef(int& x) {
    x = x - 5;
}
