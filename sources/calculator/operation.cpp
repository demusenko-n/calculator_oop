#include "../../header/calculator/operation.hpp"
operation::~operation() = default;

std::string operation::get_text() const
{
	return identifier;
}

operation::operation(std::string textIdentifier)
{
	this->identifier = std::move(textIdentifier);
}
