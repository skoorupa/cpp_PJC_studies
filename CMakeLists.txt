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

add_executable(cpp_PJC_studies w01/main.cpp)
target_link_libraries(cpp_PJC_studies fmt)
