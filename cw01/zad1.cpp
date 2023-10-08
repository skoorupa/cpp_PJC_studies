#include <iostream>
#include <vector>
#include <set>
#include <string>

auto main() -> int {
    std::cout << "zad1\n\n";

    auto samogloski = std::vector<char>{'a','e','i','o','u','y'};
    samogloski.push_back('x');

    std::cout << "Podaj wyraz:";
    auto wyraz = std::string();
    std::cin >> wyraz;

    for (char c : wyraz) {
        if (!samogloski.) {
            std::cout << "Wyraz zawiera rowniez spolgloski";
            return 0;
        }
    }

//    if (samogloski.size()==6) {
        std::cout << "Wyraz zawiera same samogloski";
//    } else {
//        std::cout << "Wyraz zawiera rowniez spolgloski";
//    }
}