#pragma once
#include "../operation.hpp"

class division_operation :public operation
{
public:
	division_operation();

	double calculate(double first, double second) override;
};
