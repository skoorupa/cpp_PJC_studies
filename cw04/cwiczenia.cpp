#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <fmt/core.h>
#include <fmt/ranges.h>
enum class Option {
    NAME, SURNAME,
    NUMBER, GROUP
};
struct Student {
private:
    std::string name;
    std::string surname;
    int studentNumber;
    int semestr;
public:
    Student(const std::string &name, const std::string &surname, int studentNumber, int semestr) : name(name),
                                                                                                   surname(surname),
                                                                                                   studentNumber(
                                                                                                           studentNumber),
                                                                                                   semestr(semestr) {}
    const std::string &getName() const {
        return name;
    }
    void setName(const std::string &name) {
        Student::name = name;
    }
    const std::string &getSurname() const {
        return surname;
    }
    void setSurname(const std::string &surname) {
        Student::surname = surname;
    }
    int getStudentNumber() const {
        return studentNumber;
    }
    void setStudentNumber(int studentNumber) {
        Student::studentNumber = studentNumber;
    }

    int getSemestr() const {
        return semestr;
    }

    static std::vector<Student> &sortByOption(std::vector<Student> &students, Option option) {
        switch (option) {
            case Option::NAME : {
                std::ranges::sort(students, {}, [](Student s){return s.getName();});
            }
                break;
            case Option::SURNAME : {
                std::ranges::sort(students, {}, [](Student s){return s.getSurname();});
            }
                break;
            case Option::NUMBER : {
                std::ranges::sort(students, {}, [](Student s){return s.getStudentNumber();});
            }
                break;
            case Option::GROUP : {
                std::ranges::sort(students, {}, [](Student s){return s.getSemestr();});
            }
                break;
        }
        return students;
    }

    static bool areInSameSemester(std::vector<Student> students) {
        if (students.size()) {
            auto firstsem = students.front().getSemestr();
            for (Student student : students)
                if (student.getSemestr() != firstsem)
                    return false;
        }
        return true;
    }
};
auto format_as(Student student) {
    return fmt::format(
            "({} {}, nr s{}, {}sem)",
            student.getName(),
            student.getSurname(),
            student.getStudentNumber(),
            student.getSemestr()
            );
}
int main() {
    auto studenci1 = std::vector<Student>{
        Student("Adam","A",29441,3),
        Student("Kacper","C",22222,3),
        Student("Zenon","D",11111,3),
        Student("Patrycja","B",33333,3)
    };
    fmt::println("{}",Student::sortByOption(studenci1,Option::SURNAME));
    fmt::println("{}",Student::areInSameSemester(studenci1));

    auto test = std::vector<int>{1,2,3,4,5};
    test.erase(test.begin(), test.end());
    fmt::println("{}",test);
}