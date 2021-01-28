#include <iostream>
#include "BasicMath.h"

BasicMath math;
//BasicMath math(123.54, 233.45);

int main() {
	math.SetRegA(255.3);
	math.SetRegB(100.2);

	std::cout << "RegA: " << math.GetRegA() << "\n";
	std::cout << "RegB: " << math.GetRegB() << "\n";

	std::cout << "Addition: " << math.Add() << "\n";
	std::cout << "Subtraction: " << math.Subtract() << "\n";
	std::cout << "Multiplication: " << math.Multiply() << "\n";
	std::cout << "Division: " << math.Divide() << "\n";
}