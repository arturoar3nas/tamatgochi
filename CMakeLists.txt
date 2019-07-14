cmake_minimum_required(VERSION 2.8)
find_package(Catch2 REQUIRED)

project(tamatgochi)

enable_testing()

add_subdirectory(test)

add_executable(${PROJECT_NAME} "main.cpp" "src/virtualCat.cpp" "src/virtualCat.hpp")

target_link_libraries(tamatgochi Catch2::Catch2)

include(CTest)
include(Catch)
catch_discover_tests(tamatgochi)
