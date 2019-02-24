#include "Procedures.h"
#include <math.h>
#include <string>

void PlusNumberPoint(double * first, double * second)
{
	*first += *second;
}
void PlusNumberLink(double & first, double & second)
{
	first += second;
}

double DeleteIntPartPoint(double * var)
{
	double temp;
	*var = modf(*var, &temp);
	return *var;
}
double DeleteIntPartLink(double & var)
{
	double temp;
	var = modf(var, &temp);
	return var;
}

void ChangeKNumberPoint(ComplexNum *complex)
{
	complex->y = -complex->y;
}
void ChangeKNumberLink(ComplexNum &complex)
{
	complex.y = -complex.y;
}

void ChangeSquarePoint(Square *sq, int * x, int * y)
{
	for (int i = 0; i < 4; i++)
	{
		sq[i].p.x += *x;
		sq[i].p.y += *y;
	}
}
void ChangeSquareLink(Square &sq, int & x, int & y)
{
	Square *temp = &sq;
	for (int i = 0; i < 4; i++)
	{
		temp[i].p.x += x;
		temp[i].p.y += y;
	}
}
