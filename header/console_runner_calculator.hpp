#pragma once
#include <iostream>

#include "calculator/calculator.hpp"

using std::cout;
using std::cin;
using std::endl;
using std::string;

class console_runner_calculator
{
public:
	console_runner_calculator(calculator* calculator);

	void run()const;
private:
	calculator* calc;
};
