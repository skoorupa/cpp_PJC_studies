#include <iostream>
#include <vector>

void boxPrint(std::vector<std::string> input, char ch);
void boxPrint(std::vector<std::string> input);

auto main() -> int {
    std::cout << "cw01\n";
    {
//        auto vec = std::vector<std::string>{"adam", "a", "b", "c"};
//
//        vec.push_back("parampam");
//
//        for (auto txt: vec) {
//            std::cout << txt << std::endl;
//        }
//
//        auto s1 = std::string();
//        auto s2 = std::string();
//        std::cout << "Podaj 1 slowo:";
//        std::cin >> s1;
//        std::cout << "Podaj 2 slowo:";
//        std::cin >> s2;
//
//        if (s1.size() > s2.size()) {
//            std::cout << s1;
//        } else if (s1.size() < s2.size()) {
//            std::cout << s2;
//        } else {
//            std::cout << "takie same";
//        }
    }
    {
        boxPrint({"a", "quick", "brown", "fox"});
        boxPrint({"a", "quick", "brown", "fox"}, '*');
        boxPrint({"a", "quick", "brown", "fox"}, '#');
        boxPrint(std::vector<std::string>{"a", "quick", "brown", "fox"}, '#');
        boxPrint({""});
        boxPrint({});
        boxPrint({}, '#');
        boxPrint({"", "hmmmm", ""});
        boxPrint({"", "", ""});
    }
}

void boxPrint(std::vector<std::string> input, char ch) {
    auto side = 0;
    for (std::string word : input) {
        if (word.size() > side) side = word.size();
    }
    side += 2;

    for (int i = 0; i < side; ++i) {
        std::cout << ch;
    }
    std::cout << std::endl;

    for (std::string word : input) {
        std::cout << ch << word;
        for (int i = 0; i < side-word.size()-2; ++i) {
            std::cout << " ";
        }
        std::cout << ch << std::endl;
    }

    for (int i = 0; i < side; ++i) {
        std::cout << ch;
    }
    std::cout << std::endl << std::endl;
}

void boxPrint(std::vector<std::string> input) {
    boxPrint(input,'*');
}