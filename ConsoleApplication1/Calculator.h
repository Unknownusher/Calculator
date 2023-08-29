#pragma once

#ifndef _CALCULATOR_
	#define _CALCULATOR_

class Calculator {

	public:
		template <int SIZE>
		static int Add(int operands[SIZE]);

		template <int SIZE>
		static float Add(float operands[SIZE]);

		template <int SIZE>
		static double Add(double operands[SIZE]);

		template <int SIZE>
		static int Subtract(int operands[SIZE]);

		template <int SIZE>
		static float Subtract(float operands[SIZE]);

		template <int SIZE>
		static double Subtract(double operands[SIZE]);

		template <int SIZE>
		static int Multiply(int operands[SIZE]);

		template <int SIZE>
		static float Multiply(float operands[SIZE]);

		template <int SIZE>
		static double Multiply(double operands[SIZE]);

		template <int SIZE>
		static int Divide(int operands[SIZE]);

		template <int SIZE>
		static float Divide(float operands[SIZE]);

		template <int SIZE>
		static double Divide(double operands[SIZE]);

};

#endif