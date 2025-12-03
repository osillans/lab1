#pragma once
#include <stdexcept>
/**
 * @class Calculator
 * @brief Простий калькулятор для виконання базових арифметичних операцій.
 *
 * @example
 * Calculator calc;
 * double sum = calc.Add(5, 3);      // 8
 * double diff = calc.Sub(10, 4);    // 6
 * double product = calc.Mul(2, 5);  // 10
 * double quotient = calc.Div(20, 5); // 4
 */
class Calculator {
public:
/**
     * @brief Додає два числа.
     *
     * @param a перший операнд
     * @param b другий операнд
     * @return Сума чисел a та b.
     *
     * @example
     * Calculator c;
     * double result = c.Add(2, 3);  // 5
     */
    double Add(double a, double b);
/**
     * @brief Віднімає друге число від першого.
     *
     * @param a зменшуване число
     * @param b від'ємник
     * @return Різниця a - b.
     *
     * @example
     * Calculator c;
     * double result = c.Sub(10, 4);  // 6
     */
    double Sub(double a, double b);
/**
     * @brief Множить два числа.
     *
     * @param a перший множник
     * @param b другий множник
     * @return Добуток a * b.
     *
     * @example
     * Calculator c;
     * double result = c.Mul(2, 5);  // 10
     */
    double Mul(double a, double b);
/**
     * @brief Ділить перше число на друге.
     *
     * @param a ділене
     * @param b дільник (не може бути 0)
     * @return Частка a / b.
     *
     * @throws std::runtime_error якщо b == 0
     *
     * @example
     * Calculator c;
     * double result = c.Div(20, 5); // 4
     */
    double Div(double a, double b);
};
