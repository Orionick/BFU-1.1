﻿# CMakeList.txt: проект CMake для UczPraktyka_6; включите исходный код и определения,
# укажите здесь логику для конкретного проекта.
#
cmake_minimum_required (VERSION 3.8)

project ("UczPraktyka_6")

# Добавьте источник в исполняемый файл этого проекта.
add_executable (UczPraktyka_6 "main.cpp" )

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET UczPraktyka_6 PROPERTY CXX_STANDARD 20)
endif()

# TODO: Добавьте тесты и целевые объекты, если это необходимо.
