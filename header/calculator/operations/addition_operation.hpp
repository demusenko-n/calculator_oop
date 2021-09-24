#pragma once
#include "../operation.hpp"

class addition_operation :public operation
{
public:
	addition_operation();

	double calculate(double first, double second) override;
};
