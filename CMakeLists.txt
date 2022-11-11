project(calculator)

add_library(calculator STATIC calculator.h calculator.cpp)
add_executable(calc main.cpp calculator.h calculator.cpp)

