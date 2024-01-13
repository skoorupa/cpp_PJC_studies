cmake_minimum_required(VERSION 3.26)
project(cpp_PJC_studies)

set(CMAKE_CXX_STANDARD 20)

include(FetchContent)

FetchContent_Declare(
        fmt
        GIT_REPOSITORY https://github.com/fmtlib/fmt
        GIT_TAG 10.1.1
)

FetchContent_MakeAvailable(fmt)

add_executable(w01 w01/main.cpp)
target_link_libraries(w01 fmt)

# cw01

add_executable(cw01 cw01/main.cpp)
target_link_libraries(cw01 fmt)

    add_executable(cw01_zad1 cw01/zad1.cpp)
    target_link_libraries(cw01_zad1 fmt)

# cw02

add_executable(cw02 cw02/main.cpp)
target_link_libraries(cw02 fmt)

    add_executable(cw02_odwracanie cw02/odwracanie.cpp)
    target_link_libraries(cw02_odwracanie fmt)

    add_executable(cw02_refactoring_before cw02/refactoring_before.cpp)
    target_link_libraries(cw02_refactoring_before fmt)

    add_executable(cw02_refactoring_after cw02/refactoring_after.cpp)
    target_link_libraries(cw02_refactoring_after fmt)

    add_executable(cw02_cwiczenia cw02/cwiczenia.cpp)
    target_link_libraries(cw02_cwiczenia fmt)

# cw03 core_nowealgorytmy.cpp

    add_executable(cw03_core_nowealgorytmy cw03/core_nowealgorytmy.cpp)
    target_link_libraries(cw03_core_nowealgorytmy fmt)

    add_executable(cw03_zaza cw03/zaza.cpp)
    target_link_libraries(cw03_zaza fmt)

# cw04

    add_executable(cw04_cwiczenia cw04/cwiczenia.cpp)
    target_link_libraries(cw04_cwiczenia fmt)

# cw05

add_executable(cw05_cwiczenia cw05/core.cpp)
target_link_libraries(cw05_cwiczenia fmt)