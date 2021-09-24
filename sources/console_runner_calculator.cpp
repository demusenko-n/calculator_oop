#include "../header/console_runner_calculator.hpp"
#include "../header/calculator/exceptions/unknown_operation_exception.hpp"

console_runner_calculator::console_runner_calculator(calculator* calculator)
{
	calc = calculator;
}

void console_runner_calculator::run() const
{
	bool should_continue = false;
	do
	{
		bool is_invalid_input = false;
		operation* chosen_operation = nullptr;

		do
		{
			string op_identifier;
			cout << "Input arithmetical operation you want to perform: ";
			cin >> op_identifier;

			try
			{
				chosen_operation = calc->get_operation(op_identifier);
				is_invalid_input = false;
			}
			catch (unknown_operation_exception&)
			{
				cout << "Invalid operation!" << endl;
				is_invalid_input = true;
			}
		} while (is_invalid_input);

		double arg_first, arg_second;
		cout << "Input arguments: ";

		cin >> arg_first >> arg_second;

		cout << chosen_operation->calculate(arg_first, arg_second) << endl;

		cout << "Want to continue? (1/0)" << endl;

		cin >> should_continue;
	} while (should_continue);
}
