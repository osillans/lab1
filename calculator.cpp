
#include "Calculator.h"

double Calculator::Add(double a, double b) {
    return a + b;
}

double Calculator::Sub(double a, double b) {
    return a - b;
}

double Calculator::Mul(double a, double b) {
    return a * b;
}

double Calculator::Div(double a, double b) {
    if (b == 0.0) throw std::invalid_argument("Division by zero");
    return a / b;
}
