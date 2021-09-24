#pragma once
#include "../operation.hpp"

class subtraction_operation :public operation
{
public:
	subtraction_operation();

	double calculate(double first, double second) override;
};
