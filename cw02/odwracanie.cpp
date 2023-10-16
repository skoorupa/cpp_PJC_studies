/*
 * Napisz funkcję reversedWords(), która przyjmie przez argument tekst (std::string)
 * i zwróci nowy ciąg znaków tego samego typu, którego słowa będą w odwróconej kolejności
 *
 * */

#include <fmt/core.h>
#include <set>

auto reversedWords(std::string s) -> std::string;

auto main() -> int {
    fmt::println(
            "{}\n{}\n{}\n{}",
            reversedWords("Ala ma kota"),
            reversedWords("Ala"),
            reversedWords(""),
            reversedWords("1 2 3")
    );
}

auto reversedWords(std::string s) -> std::string {
    std::string result = "";
    std::string word = "";
    std::set<char> whites = {' ','\t','\n'};

    for (int i = s.size()-1; i >= 0; i--) {
        char c = s[i];
        if (whites.contains(c)) {
            result = result + word + c;
            word = "";
        } else
            word = c + word;
    }
    result = result + word;
    return result;
}
