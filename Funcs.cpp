#include "Funcs.h"
#include <string>

using namespace std;

bool check_for_vow(string letter)
{
	string check_str = "aeiouyAEIOUY";
	for (int i = 0; check_str[i] != '\0'; i++)
	{
		if (check_str[i] == letter[0])
		{
			return true;
		}
	}
	return false;
}

double calculate(double x, double y, double (*f)(double x, double y))
{
	return f(x, y);
}
double add_sum(double x, double y)
{
	return x + y;
}
double add_product(double x, double y)
{
	return x * y;
}
double add_something(double x, double y)
{
	return 0.5 * x + 0.5 * y;
}
