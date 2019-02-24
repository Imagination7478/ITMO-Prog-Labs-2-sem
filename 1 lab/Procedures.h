#pragma once
// 2
void PlusNumberPoint(double *first, double *second);
void PlusNumberLink(double &first, double &second);

// 5
void DeleteIntPartPoint(double *var);
void DeleteIntPartLink(double &var);

// 10
struct ComplexNum;

void ChangeKNumberPoint(ComplexNum *complex);
void ChangeKNumberLink(ComplexNum &complex);

// 13
struct Square;

void changeSquarePoint(Square *sq, double *x, double *y);
void changeSquareLink(Square &sq, double &x, double &y);