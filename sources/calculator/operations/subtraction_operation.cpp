#include "../../../header/calculator/operations/subtraction_operation.hpp"

subtraction_operation::subtraction_operation():operation("-")
{}

double subtraction_operation::calculate(double first, double second)
{
	return first - second;
}
