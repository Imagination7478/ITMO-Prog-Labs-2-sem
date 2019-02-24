#include "Procedures.h"
#include <math.h>

struct ComplexNum {
	float x, y;
};

struct Square {
	double x1, x2, y1, y2;
};

void PlusNumberPoint(double * first, double * second)
{
	*first += *second;
}
void PlusNumberLink(double & first, double & second)
{
	first += second;
}

void DeleteIntPartPoint(double * var)
{
	double temp;
	*var = modf(*var, &temp);
}
void DeleteIntPartLink(double & var)
{
	double temp;
	var = modf(var, &temp);
}

void ChangeKNumberPoint(ComplexNum *complex)
{
	complex->x = *x;
	complex->y = -*y;
}
void ChangeKNumberLink(ComplexNum &complex)
{
	complex.x = x;
	complex.y = -y;
}

void changeSquarePoint(Square *sq, double * x, double * y)
{
	sq->x1 += *x;
	sq->x2 += *x;
	sq->y1 += *y;
	sq->y2 += *y;
}
void changeSquareLink(Square &sq, double & x, double & y)
{
	sq.x1 += x;
	sq.x2 += x;
	sq.y1 += y;
	sq.y2 += x;
}
