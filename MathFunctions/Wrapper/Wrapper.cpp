#include "pch.h"
#include "Wrapper.h"

Wrapper::MathWrapper::MathWrapper() {
	basicMathClass = new BasicMath;
}

Wrapper::MathWrapper::MathWrapper(double a, double b) {
	basicMathClass = new BasicMath(a, b);
}

Wrapper::MathWrapper::~MathWrapper() {
	delete basicMathClass;
}

double Wrapper::MathWrapper::AddWrapper() {
	return basicMathClass->Add();
}

double Wrapper::MathWrapper::AddWrapper(double a, double b) {
	return basicMathClass->Add(a, b);
}

double Wrapper::MathWrapper::SubtractWrapper() {
	return basicMathClass->Subtract();
}

double Wrapper::MathWrapper::SubtractWrapper(double a, double b) {
	return basicMathClass->Subtract(a, b);
}

double Wrapper::MathWrapper::MultiplyWrapper() {
	return basicMathClass->Multiply();
}

double Wrapper::MathWrapper::MultiplyWrapper(double a, double b) {
	return basicMathClass->Multiply(a, b);
}

double Wrapper::MathWrapper::DivideWrapper() {
	return basicMathClass->Divide();
}

double Wrapper::MathWrapper::DivideWrapper(double a, double b) {
	return basicMathClass->Divide(a, b);
}

double Wrapper::MathWrapper::GetRegAwrapper() {
	return basicMathClass->GetRegA();
}

double Wrapper::MathWrapper::GetRegBwrapper() {
	return basicMathClass->GetRegB();
}

void Wrapper::MathWrapper::SetRegAwrapper(double a) {
	basicMathClass->SetRegA(a);
}

void Wrapper::MathWrapper::SetRegBwrapper(double b) {
	basicMathClass->SetRegB(b);
}
