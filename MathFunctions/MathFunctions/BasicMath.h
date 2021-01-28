#pragma once

class BasicMath {
private:
	double _a = 0;
	double _b = 0;

public:
	BasicMath();
	BasicMath(double a, double b);

	double Add();
	double Add(double a, double b);
	double Subtract();
	double Subtract(double a, double b);
	double Multiply();
	double Multiply(double a, double b);
	double Divide();
	double Divide(double a, double b);

	double GetRegA();
	double GetRegB();

	void SetRegA(double a);
	void SetRegB(double b);
};
