#include <fmt/core.h>
#include <vector>

struct test1 {
    test1() {}
    virtual void test() const {
        fmt::print("test1\n");
    }
};

struct test2 : test1 {
    test2() {}
    void test() const override {
        fmt::print("test2\n");
    }
};

struct test3 : test1 {
    test3() {}
    void test() const override {
        fmt::print("test3\n");
    }
};

auto main() -> int {
    std::vector<const test1*> tests = {new test1(), new test2(), new test3()};

    for (const auto& t : tests) {
        t->test();
    }

    // Zwolnij pamięć po obiektach dynamicznych
    for (const auto& t : tests) {
        delete t;
    }
}
