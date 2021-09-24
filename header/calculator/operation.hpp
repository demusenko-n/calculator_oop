#pragma once
#include <string>

class operation
{
public:
	virtual ~operation();
	virtual double calculate(double first, double second) = 0;

	std::string get_text()const;
protected:
	operation(std::string textIdentifier);
private:
	std::string identifier;
};

