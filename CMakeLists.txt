cmake_minimum_required(VERSION 2.8)

project(tamatgochi)

enable_testing()

add_subdirectory(test)
add_subdirectory(src)

add_executable(${PROJECT_NAME} "main.cpp" "src/virtualCat.cpp" "src/virtualCat.hpp")
target_include_directories(tamatgochi PRIVATE ${CMAKE_SOURCE_DIR}/src)
