cmake_minimum_required(VERSION 2.8)

project(tamatgochi)

enable_testing()

add_subdirectory(test)

add_executable(${PROJECT_NAME} "main.cpp")
