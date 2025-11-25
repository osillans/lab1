#include "pch.h"
#include "CppUnitTest.h"
#include "../lab1/calculator.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CalculatorTests
{
    TEST_CLASS(CalculatorTests)
    {
    public:

        TEST_METHOD(Add_PositiveNumbers)
        {
            Calculator c;
            Assert::AreEqual(7.0, c.Add(3, 4), 0.0001);
        }

        TEST_METHOD(Add_NegativeNumbers)
        {
            Calculator c;
            Assert::AreEqual(-9.0, c.Add(-4, -5), 0.0001);
        }

        TEST_METHOD(Add_PositiveAndNegative)
        {
            Calculator c;
            Assert::AreEqual(1.0, c.Add(3, -2), 0.0001);
        }

        TEST_METHOD(Subtract_Positive)
        {
            Calculator c;
            Assert::AreEqual(1.0, c.Sub(3, 2), 0.0001);
        }

        TEST_METHOD(Subtract_Negative)
        {
            Calculator c;
            Assert::AreEqual(-1.0, c.Sub(2, 3), 0.0001);
        }

        TEST_METHOD(Subtract_ToZero)
        {
            Calculator c;
            Assert::AreEqual(0.0, c.Sub(5, 5), 0.0001);
        }

        TEST_METHOD(Multiply_Positive)
        {
            Calculator c;
            Assert::AreEqual(12.0, c.Mul(3, 4), 0.0001);
        }

        TEST_METHOD(Multiply_WithZero)
        {
            Calculator c;
            Assert::AreEqual(0.0, c.Mul(5, 0), 0.0001);
        }

        TEST_METHOD(Multiply_Negative)
        {
            Calculator c;
            Assert::AreEqual(-15.0, c.Mul(-3, 5), 0.0001);
        }

        TEST_METHOD(Divide_Positive)
        {
            Calculator c;
            Assert::AreEqual(2.0, c.Div(10, 5), 0.0001);
        }

        TEST_METHOD(Divide_Negative)
        {
            Calculator c;
            Assert::AreEqual(-2.0, c.Div(10, -5), 0.0001);
        }

        TEST_METHOD(Divide_Fraction)
        {
            Calculator c;
            Assert::AreEqual(2.5, c.Div(5, 2), 0.0001);
        }

        TEST_METHOD(Divide_ByZero_Throws)
        {
            Calculator c;
            auto lambda = [&]() { c.Div(5, 0); };
            Assert::ExpectException<std::runtime_error>(lambda);
        }

        TEST_METHOD(Add_LargeNumbers)
        {
            Calculator c;
            Assert::AreEqual(20000000000.0, c.Add(1e10, 1e10), 0.0001);
        }

        TEST_METHOD(Subtract_LargeNumbers)
        {
            Calculator c;
            Assert::AreEqual(0.0, c.Sub(1e10, 1e10), 0.0001);
        }

        TEST_METHOD(Multiply_LargeNumbers)
        {
            Calculator c;
            Assert::AreEqual(1e20, c.Mul(1e10, 1e10), 1e10);
        }

        TEST_METHOD(Divide_SmallNumbers)
        {
            Calculator c;
            Assert::AreEqual(1.0, c.Div(0.0001, 0.0001), 0.00000001);
        }

        TEST_METHOD(Add_DoublePrecision)
        {
            Calculator c;
            Assert::AreEqual(0.3, c.Add(0.1, 0.2), 0.000001);
        }

        TEST_METHOD(Subtract_DoublePrecision)
        {
            Calculator c;
            Assert::AreEqual(-0.1, c.Sub(0.1, 0.2), 0.000001);
        }
    };
}