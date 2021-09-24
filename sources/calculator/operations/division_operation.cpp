#include "../../../header/calculator/operations/division_operation.hpp"

division_operation::division_operation():operation("/")
{}

double division_operation::calculate(double first, double second)
{
	return first / second;
}
