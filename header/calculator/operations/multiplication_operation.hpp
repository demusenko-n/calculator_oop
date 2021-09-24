#pragma once
#include "../operation.hpp"

class multiplication_operation :public operation
{	
public:
	multiplication_operation();

	double calculate(double first, double second) override;
};
