#include <iostream>
#include "Calculator.h"

int main() {

	const int SIZE = 5;
	int values[SIZE] = { 1, 2, 3, 4, 5 };

	int sum = Calculator::Add<SIZE>(values);

	std::cout << sum << std::endl;

	return 0;

}