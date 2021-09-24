#include "header/console_calculator_lib.hpp"

using namespace std;

void main_function()
{
	const vector<operation*> operations =
	{
		new addition_operation(),
		new subtraction_operation(),
		new multiplication_operation(),
		new division_operation(),
		new pow_operation()
	};
	calculator calculator(operations);

	console_runner_calculator console_calc(&calculator);

	console_calc.run();


	for (const operation* op : operations)
	{
		delete op;
	}
}

int main(int argc, char* argv[])
{
	main_function();
	return EXIT_SUCCESS;
}