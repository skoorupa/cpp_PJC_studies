


#include <vector>
#include <string>
#include <algorithm>

auto example(
        std::vector<std::string> left, std::vector<std::string> right
) -> void {
    auto sort_and_unique = [](std::vector<std::string>& vec) {
        std::ranges::sort(vec);
        auto duplicates = std::ranges::unique(vec);
        vec.erase(duplicates.begin(), duplicates.end());
    };

    std::ranges::sort(left);
    auto duplicates = std::ranges::unique(left);
    left.erase(duplicates.begin(), duplicates.end());

    std::ranges::sort(right);
    duplicates = std::ranges::unique(right);
    right.erase(duplicates.begin(), duplicates.end());

    if (left.size() < right.size()) {
        for (auto i = 0; i < right.size(); i++) {
            for (auto j = 0; j < right.size() - 1 - i; j++) {
                // both start with a digit or both start with a letter
                if ((right[j].front() >= '0' and
                     right[j].front() <= '9' and
                     right[j + 1].front() >= '0' and
                     right[j + 1].front() <= '9')
                    or
                    ((right[j].front() < '0' or
                      right[j].front() > '9') and
                     (right[j + 1].front() < '0' or
                      right[j + 1].front() > '9'))) {
                    if (right[j] > right[j + 1]) {
                        std::ranges::swap(right[j], right[j + 1]);
                    }
                } else { // leading digits last
                    if (right[j].front() >= '0' and right[j].front() <= '9') {
                        std::ranges::swap(right[j], right[j + 1]);
                    }
                }
            }
        }
    } else {
        for (auto i = 0; i < left.size(); i++) {
            for (auto j = 0; j < left.size() - 1 - i; j++) {
                // both start with a digit or both start with a letter
                if ((left[j].front() >= '0' and
                     left[j].front() <= '9' and
                     left[j + 1].front() >= '0' and
                     left[j + 1].front() <= '9')
                    or
                    ((left[j].front() < '0' or
                      left[j].front() > '9') and
                     (left[j + 1].front() < '0' or
                      left[j + 1].front() > '9'))) {
                    if (left[j] > left[j + 1]) {
                        std::ranges::swap(left[j], left[j + 1]);
                    }
                } else { // leading digits last
                    if (left[j].front() >= '0' and left[j].front() <= '9') {
                        std::ranges::swap(left[j], left[j + 1]);
                    }
                }
            }
        }
    }
}

auto main() -> int {

}