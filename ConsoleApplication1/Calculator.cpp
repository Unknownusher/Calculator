#include "Calculator.h"

/// <summary>
/// Returns the sum of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static int Calculator::Add(int operands[SIZE]) {

	int sum = 0;

	for (int i = 0; i < SIZE; i++)
		sum += operands[i];
	
	return sum;

}

/// <summary>
/// Returns the sum of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static float Calculator::Add(float operands[SIZE]) {

	float sum = 0;

	for (int i = 0; i < SIZE; i++)
		sum += operands[i];

	return sum;

}

/// <summary>
/// Returns the sum of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE> 
static double Calculator::Add(double operands[SIZE]) {

	double sum = 0;

	for (int i = 0; i < SIZE; i++)
		sum += operands[i];

	return sum;

}

/// <summary>
/// Returns the difference of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>
 
template<int SIZE>
static int Calculator::Subtract(int operands[SIZE]) {

	int first = operands[0];
	int firstIndex = 0;

	for (int i = 0; i < SIZE; i++) {

		if (i == firstIndex)
			continue;

		first -= operands[i];

	}

	int difference = first;

	return difference;

}

/// <summary>
/// Returns the difference of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>
 
template<int SIZE>
static float Calculator::Subtract(float operands[SIZE]) {

	float first = operands[0];
	int firstIndex = 0;

	for (int i = 0; i < SIZE; i++) {

		if (i == firstIndex)
			continue;

		first -= operands[i];

	}

	float difference = first;

	return difference;

}

/// <summary>
/// Returns the difference of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>
 
template<int SIZE>
static double Calculator::Subtract(double operands[SIZE]) {

	double first = operands[0];
	int firstIndex = 0;

	for (int i = 0; i < SIZE; i++) {

		if (i == firstIndex)
			continue;

		first -= operands[i];

	}

	double difference = first;

	return difference;

}

/// <summary>
/// Returns the product of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static int Calculator::Multiply(int operands[SIZE]) {

	int product = 1;

	for (int i = 0; i < SIZE; i++)
		product *= operands[i];

	return product;

}

/// <summary>
/// Returns the product of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static float Calculator::Multiply(float operands[SIZE]) {

	float product = 1;

	for (int i = 0; i < SIZE; i++)
		product *= operands[i];

	return product;

}

/// <summary>
/// Returns the product of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static double Calculator::Multiply(double operands[SIZE]) {

	double product = 1;

	for (int i = 0; i < SIZE; i++)
		product *= operands[i];

	return product;

}

/// <summary>
/// Returns the quotient of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static int Calculator::Divide(int operands[SIZE]) {

	int first = operands[0];
	int firstIndex = 0;

	for (int i = 0; i < SIZE; i++) {

		if (i == firstIndex)
			continue;

		first /= operands[i];

	}

	int quotient = first;

	return quotient;

}

/// <summary>
/// Returns the quotient of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static float Calculator::Divide(float operands[SIZE]) {

	float first = operands[0];
	int firstIndex = 0;

	for (int i = 0; i < SIZE; i++) {

		if (i == firstIndex)
			continue;

		first /= operands[i];

	}

	float quotient = first;

	return quotient;

}

/// <summary>
/// Returns the quotient of the operands
/// </summary>
/// <param name="operands"></param>
/// <returns></returns>

template<int SIZE>
static double Calculator::Divide(double operands[SIZE]) {

	double first = operands[0];
	int firstIndex = 0;

	for (int i = 0; i < SIZE; i++) {

		if (i == firstIndex)
			continue;

		first /= operands[i];

	}

	double quotient = first;

	return quotient;

}