all: main

main: main.cpp
	g++ main.cpp sources/console_runner_calculator.cpp sources/calculator/calculator.cpp sources/calculator/operation.cpp sources/calculator/operations/addition_operation.cpp sources/calculator/operations/division_operation.cpp sources/calculator/operations/multiplication_operation.cpp sources/calculator/operations/pow_operation.cpp sources/calculator/operations/subtraction_operation.cpp -o prog -w
