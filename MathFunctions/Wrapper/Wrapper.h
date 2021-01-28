#pragma once
#include "Core.h"

using namespace System;

namespace Wrapper {
	public ref class MathWrapper {
	private:
		BasicMath* basicMathClass;
	public:
		MathWrapper();
		MathWrapper(double a, double b);
		~MathWrapper();

		double AddWrapper();
		double AddWrapper(double a, double b);
		double SubtractWrapper();
		double SubtractWrapper(double a, double b);
		double MultiplyWrapper();
		double MultiplyWrapper(double a, double b);
		double DivideWrapper();
		double DivideWrapper(double a, double b);

		double GetRegAwrapper();
		double GetRegBwrapper();
		
		void SetRegAwrapper(double a);
		void SetRegBwrapper(double b);

	};
}
