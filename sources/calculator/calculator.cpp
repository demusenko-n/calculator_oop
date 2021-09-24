#include "../../header/calculator/calculator.hpp"

#include "../../header/calculator/exceptions/invalid_calc_init_exception.hpp"
#include "../../header/calculator/exceptions/unknown_operation_exception.hpp"

calculator::calculator(const std::vector<operation*>& ops)
{
	operations.reserve(ops.size());
	for (operation* op : ops)
	{
		//check for operations with the same identifier
		for (const operation* op_copied : operations)
		{
			if (op->get_text() == op_copied->get_text())
			{
				throw invalid_calc_init_exception();
			}
		}

		operations.push_back(op);
	}
}


operation* calculator::get_operation(const std::string& identifier) const
{
	for (operation* op : operations)
	{
		if (op->get_text() == identifier)
		{
			return op;
		}
	}
	throw unknown_operation_exception();
}
