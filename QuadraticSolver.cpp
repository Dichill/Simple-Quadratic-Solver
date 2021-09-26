#include <iostream>
#include <cmath>

int QuadraticSolve(int a, int b, int c)
{
	/*
		Our Equation is x = -b +/-
		The Square root of b squared - 4 ac all over 2a
	*/

	int firstNum = b * b - 4 * (a * c);
	double squaredNum = sqrt(firstNum);

	double positiveSol = -b + squaredNum;
	double negativeSol = -b - squaredNum;

	double positiveResult = positiveSol / 2 * a;
	double negativeResult = negativeSol / 2 * a;

	std::cout << "[Solver] First Sol. " << positiveResult << '\n';
	std::cout << "[Solver] Second Sol. " << negativeResult << '\n';

	return 0;
}

int main()
{
	// These are our variables.
	int a{};
	int b{};
	int c{};
	
	// Starting point, let the user pick which formula to use.
	int menuSelection{};

	std::cout << "This is a simple Quadration Equation Solver\n";
	std::cout << "Common Formulas in Questions.\n";
	std::cout << "[0] a^2 + b + c = 0\n";
	std::cout << "[1] a^2 + b = c\n";

	std::cout << "[User] Select Formula: ";
	std::cin >> menuSelection;

	// This is where we question the user.
	std::cout << "[Solver] What is our A: ";
	std::cin >> a;

	std::cout << "[Solver] What is our B: ";
	std::cin >> b;

	std::cout << "[Solver] What is our C: ";
	std::cin >> c;

	if (menuSelection == 0)
	{
		QuadraticSolve(a, b, c);
	}
}