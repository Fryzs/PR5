#include "Array.h"
#include <iostream>
void Array::print()
{
	for (int i = 0; i < n; i++)
		a[i].print();
}
void Array::set_random() 
{
	for (int i = 0; i < n; i++)
		a[i].set_random();
}
