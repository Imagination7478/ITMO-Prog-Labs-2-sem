#pragma once

struct ComplexNum {
	float x, y;
};

struct Square {
	struct Point {
		int x, y;
	};
	Point p;
	int side;
};

// 2
void PlusNumberPoint(double *first, double *second);
void PlusNumberLink(double &first, double &second);

// 5
double DeleteIntPartPoint(double *var);
double DeleteIntPartLink(double &var);

// 10
struct ComplexNum;

void ChangeKNumberPoint(ComplexNum *complex);
void ChangeKNumberLink(ComplexNum &complex);

// 13
struct Square;

void ChangeSquarePoint(Square *sq, int *x, int *y);
void ChangeSquareLink(Square &sq, int &x, int &y);