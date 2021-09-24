#include "../../../header/calculator/operations/pow_operation.hpp"
#include <cmath>

pow_operation::pow_operation():operation("**")
{}

double pow_operation::calculate(double first, double second)
{
	return pow(first, second);
}
