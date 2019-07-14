cmake_minimum_required(VERSION 2.8)

project(tamatgochi_test)

find_package(Catch2 REQUIRED)
add_executable(tamatgochi_test main.cpp virtualCatTest.cpp ../src/virtualCat.cpp ../src/virtualCat.hpp)

add_test(NAME tamatgochi
         COMMAND tamatgochi -r junit)
