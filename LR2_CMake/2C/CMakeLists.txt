cmake_minimum_required(VERSION 3.20)
project(Lab2C NONE)

# Вводимые пользователем значения (видны в CMake GUI)
set(A "10" CACHE STRING "Operand A (integer)")
set(B "5"  CACHE STRING "Operand B (integer)")
set(OP "+" CACHE STRING "Operation: + - * /")

# Проверка: A и B должны быть целыми числами
string(REGEX MATCH "^-?[0-9]+$" A_OK "${A}")
string(REGEX MATCH "^-?[0-9]+$" B_OK "${B}")

if(NOT A_OK)
    message(FATAL_ERROR "A must be an integer. Current A='${A}'")
endif()

if(NOT B_OK)
    message(FATAL_ERROR "B must be an integer. Current B='${B}'")
endif()

# Выполнение операции при нажатии Configure (это происходит на этапе конфигурации)
if(OP STREQUAL "+")
    math(EXPR RESULT "${A} + ${B}")
elseif(OP STREQUAL "-")
    math(EXPR RESULT "${A} - ${B}")
elseif(OP STREQUAL "*")
    math(EXPR RESULT "${A} * ${B}")
elseif(OP STREQUAL "/")
    if("${B}" STREQUAL "0")
        message(FATAL_ERROR "Division by zero is not allowed (B=0).")
    endif()
    # В CMake math() деление целочисленное
    math(EXPR RESULT "${A} / ${B}")
else()
    message(FATAL_ERROR "OP must be one of: + - * / . Current OP='${OP}'")
endif()

# Результат тоже кладём в CACHE, чтобы он был виден в GUI
set(RESULT "${RESULT}" CACHE STRING "Result (read-only)" FORCE)

message(STATUS "A=${A}, B=${B}, OP=${OP} => RESULT=${RESULT}")
