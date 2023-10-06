#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

#include <fmt/ranges.h>

void showVec(std::vector<int> vec);
void modifyRef(int& x);
void boxPrint(std::vector<std::string> input, char ch);
void boxPrint(std::vector<std::string> input);

auto main() -> int {
    std::cout << "cw01\n";
    {
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

void showVec(std::vector<int> vec) {
    for (int i = 0; i < vec.size(); ++i) {
        std::cout << vec[i] << ",\t";
    }
    std::cout << std::endl;
}

void modifyRef(int& x) {
    x = x - 5;
}
