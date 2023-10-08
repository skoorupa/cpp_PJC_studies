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

add_executable(cw01 cw01/main.cpp)
target_link_libraries(cw01 fmt)

add_executable(cw01_zad1 cw01/zad1.cpp)
target_link_libraries(cw01_zad1 fmt)

add_executable(cw02 cw02/main.cpp)
target_link_libraries(cw02 fmt)
