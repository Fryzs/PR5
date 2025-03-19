#pragma once
class Operator_overload
{
	int numenator, denumenator;
public:
	Operator_overload()
	{
		numenator = 1;
		denumenator = 1;
	}
	Operator_overload(int a, int i)
	{
		numenator = a;
		if (i != 0)
			denumenator = i;
		else
			denumenator = 1;
	}
	void set_velue(int a, int i);
	void print();
	void set_random();

	friend Operator_overload operator + (const  Operator_overload& d1, const Operator_overload& d2)
	{
		Operator_overload d3;

		if (d1.denumenator == d2.denumenator)
		{
			d3.denumenator = d1.denumenator;
			d3.numenator = d1.numenator + d2.numenator;
		}
		else {
			d3.denumenator = d1.denumenator * d2.denumenator;
			d3.numenator = (d1.numenator * d2.denumenator) + (d2.numenator * d2.denumenator);
		}
		return d3;
	}

	friend Operator_overload operator - (const  Operator_overload& d1, const Operator_overload& d2)
	{
		Operator_overload d3;

		if (d1.denumenator == d2.denumenator)
		{
			d3.denumenator = d1.denumenator;
			d3.numenator = d1.numenator - d2.numenator;
		}
		else {
			d3.denumenator = d1.denumenator * d2.denumenator;
			d3.numenator = (d1.numenator * d2.denumenator) - (d2.numenator * d2.denumenator);

		}
		return d3;
	}
};

