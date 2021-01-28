#include "BasicMath.h"

BasicMath::BasicMath() {}

BasicMath::BasicMath(double a, double b) : _a{ a }, _b{ b } {}

double BasicMath::Add() {
	return(this->_a + this->_b);
}

double BasicMath::Add(double a, double b) {
	return (a + b);
}

double BasicMath::Subtract() {
	return(this->_a - this->_b);
}

double BasicMath::Subtract(double a, double b) {
	return (a - b);
}

double BasicMath::Multiply() {
	return(this->_a * this->_b);
}

double BasicMath::Multiply(double a, double b) {
	return (a * b);
}

double BasicMath::Divide() {
	if (this->_b == 0) {
		return 0;
	}
	else
	{
		return(this->_a / this->_b);
	}
}

double BasicMath::Divide(double a, double b) {
	if (b == 0) {
		return 0;
	}
	else
	{
		return (a / b);
	}
	
}

double BasicMath::GetRegA() {
	return _a;
}

double BasicMath::GetRegB() {
	return _b;
}

void BasicMath::SetRegA(double a) {
	this->_a = a;
}

void BasicMath::SetRegB(double b) {
	this->_b = b;
}