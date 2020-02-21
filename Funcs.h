#pragma once
#include <string>

using namespace std;

bool check_for_vow(string letter);

double calculate(double x, double y, double (*f)(double x, double y));

double add_sum(double x, double y);

double add_product(double x, double y);

double add_something(double x, double y);

typedef double (*Func)(double x, double y);

