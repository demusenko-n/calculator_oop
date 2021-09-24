#pragma once
#include <vector>
#include <string>
#include "operation.hpp"

class calculator
{
public:
	calculator(const std::vector<operation*>& ops);

	operation* get_operation(const std::string& identifier)const;
private:
	std::vector<operation*> operations;
};
