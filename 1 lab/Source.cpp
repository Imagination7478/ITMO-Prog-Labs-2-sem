#include "Procedures.h"
#include <iostream>
using namespace std;

int main()
{
	double x, y;
	double deletePart;

	// 2 ������� 2 �����
	cout << "Input x and y: ";
	cin >> x >> y;
	PlusNumberPoint(&x, &y);
	cout << "Plus Number Point: " << x << endl;
	PlusNumberLink(y, x);
	cout << "Plus Number Link: " << y << endl;

	// 5 ������� ����� �����
	cout << "Input double number: ";
	cin >> deletePart;
	DeleteIntPartLink(deletePart);

	cout << "Input double number again: ";
	cin >> deletePart;
	DeleteIntPartPoint(&deletePart);

	// 10 ������������� ����������� �����
	struct Square sq;
	cout << "Input Re part of complex number: ";
	cin >> cn



	return 0;
}