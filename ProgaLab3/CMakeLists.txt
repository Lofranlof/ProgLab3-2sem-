# CMakeList.txt: проект CMake для ProgaLab3; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

# Добавьте источник в исполняемый файл этого проекта.
add_executable (ProgaLab3 "ProgaLab3.cpp" "ProgaLab3.h" "Mystack.h" "Mystack.cpp" "MyComplex.h" "MyComplex.cpp")

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
