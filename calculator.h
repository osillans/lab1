#pragma once
#include <stdexcept>
/**
 * @class Calculator
 * @brief Калькулятор для базових арифметичних операцій.
 */
class Calculator {
public:
/**
     * @brief Додавання двох чисел.
     * @param a перше число
     * @param b друге число
     * @return a + b
     */
    double Add(double a, double b);
/**
     * @brief Віднімання.
     */
    double Sub(double a, double b);
/**
     * @brief Множення.
     */
    double Mul(double a, double b);
/**
     * @brief Ділення.
     * @throws std::invalid_argument якщо ділення на нуль
     */
    double Div(double a, double b);
};
