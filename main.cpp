#include <iostream>
#include "calculator.h"

int main() {
    Calculator calc;

    double a, b;
    char op;

    std::cout << "Enter expression (a op b): ";
    std::cin >> a >> op >> b;

    try {
        switch (op) {
        case '+': std::cout << calc.Add(a, b); break;
        case '-': std::cout << calc.Sub(a, b); break;
        case '*': std::cout << calc.Mul(a, b); break;
        case '/': std::cout << calc.Div(a, b); break;
        default:
            std::cout << "Unknown operator!";
        }
    }
    catch (const std::exception& e) {
        std::cout << "Error: " << e.what();
    }

    return 0;
}
