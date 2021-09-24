#include "../../../header/calculator/operations/multiplication_operation.hpp"

multiplication_operation::multiplication_operation():operation("*")
{}

double multiplication_operation::calculate(double first, double second)
{
	return first * second;
}
