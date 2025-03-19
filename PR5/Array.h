#pragma once
#include "Operator_overload.h"
class Array
{
	Operator_overload *a;
public: 
	int n;
	Array()
	{
		a = new Operator_overload[10];
		n = 10;
	}
	Array(int SizeArray)
	{
		a = new Operator_overload[SizeArray];
		n = SizeArray;
	}
	/*~Array() {
		delete[] a;
	}*/
	void print();
	void set_random();
	friend Array operator + (const Array& ar1, const Array& ar2)
	{
		 int max = ar1.n > ar2.n ? ar1.n : ar2.n;
		 int min = ar1.n <= ar2.n ? ar1.n : ar2.n;

		 Array ar3(max);
		 for (int i = 0; i < min; i++)
			 ar3.a[i] = ar1.a[i] + ar2.a[i];

		 if(ar1.n < ar2.n)
		 {
			 for (int i = min; i < max; i++)
				 ar3.a[i] = ar2.a[i];
		 }
		 else
		 {
			 for (int i = min; i < max; i++)
				 ar3.a[i] = ar1.a[i];
		 }
		 return ar3;

	}
	friend Array operator - (const Array& ar1, const Array& ar2)
	{
		int max = ar1.n > ar2.n ? ar1.n : ar2.n;
		int min = ar1.n <= ar2.n ? ar1.n : ar2.n;

		Array ar3(max);
		for (int i = 0; i < min; i++)
			ar3.a[i] = ar1.a[i] - ar2.a[i];

		if (ar1.n < ar2.n)
		{
			for (int i = min; i < max; i++)
				ar3.a[i] = ar2.a[i];
		}
		else
		{
			for (int i = min; i < max; i++)
				ar3.a[i] = ar1.a[i];
		}
		return ar3;

	}
};

