#include "../../../header/calculator/operations/addition_operation.hpp"

addition_operation::addition_operation():operation("+")
{}

double addition_operation::calculate(double first, double second)
{
	return first + second;
}
