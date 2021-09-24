#pragma once
#include "../operation.hpp"

class pow_operation :public operation
{
public:
	pow_operation();

	double calculate(double first, double second) override;
};
