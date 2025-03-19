#include "Operator_overload.h"
#include <iostream>
void Operator_overload::print()
{
	std::cout << numenator << "/" << denumenator<<", ";
}
void Operator_overload::set_velue(int a, int i)
{
	numenator = a;
	if (i != 0)
		denumenator = i;
	else
		denumenator = 1;
}
void Operator_overload::set_random() 
{
	set_velue(rand() % 50 - 5, rand() % 50 - 5);
}