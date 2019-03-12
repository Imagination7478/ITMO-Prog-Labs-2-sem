#include "Procedures.h"
#include <iostream>
using namespace std;

void BuildComplexNum(const float x, const float y)
{
	cout << "Your complex num is: z = " << x << " + i*(" << y << ")" << endl;
}
void BuildSquare(Square sq[])
{
	for (int i = 0; i < 4; i++)
	{
		cout << "Coord x of " << i + 1 << " point = " << sq[i].p.x << endl;
		cout << "Coord y of " << i + 1 << " point = " << sq[i].p.y << endl;
	}
}

int main()
{
	double x, y;
	double deletePart;

	// 2 —ложить 2 числа
	cout << "\t\t2. Sum of two num" << endl;

	cout << "Input x and y: ";
	cin >> x >> y;
	PlusNumberPoint(&x, &y);
	cout << "Plus Number Point: " << x << endl;

	cout << "Input x and y: ";
	cin >> x >> y;
	PlusNumberLink(y, x);
	cout << "Plus Number Link: " << y << endl;

	// 5 удалить целую часть
	cout << "\t\t5. Delete int part" << endl;
	cout << "Input double number: ";
	cin >> deletePart;
	double var;
	var = DeleteIntPartLink(deletePart);
	cout << "Decimal part is: " << var << endl;

	cout << "Input double number again: ";
	cin >> deletePart;
	var = DeleteIntPartPoint(&deletePart);
	cout << "Decimal part is: " << var << endl;

	// 10 инвертировать комплексное число
	cout << "\t\t10. Invert complex num" << endl;
	struct ComplexNum cm;

	cout << "Input Re part of complex number: ";
	cin >> cm.x;
	cout << "Input Im part of complex number: ";
	cin >> cm.y;
	BuildComplexNum(cm.x, cm.y);
	ChangeKNumberPoint(&cm);
	BuildComplexNum(cm.x, cm.y);

	cout << "Input Re part of complex number again: ";
	cin >> cm.x;
	cout << "Input Im part of complex number again: ";
	cin >> cm.y;
	BuildComplexNum(cm.x, cm.y);
	ChangeKNumberLink(cm);
	BuildComplexNum(cm.x, cm.y);
	
	// 13 ѕередвинуть квадрат на вектор
	cout << "\t\t13. Change Square" << endl;
	struct Square *sq = new Square[4];
	int v1, v2;
	exception ex;
	cout << "Input long of side: ";
	cin >> sq->side;
	
	try {
		for (int i = 0; i < 4; i++)
		{
			cout << "Input x coord of " << i + 1 << " point: ";
			cin >> sq[i].p.x;
			cout << "Input y coord of " << i + 1 << " point: ";
			cin >> sq[i].p.y;
			if (i > 0 // ≈сли разница в координатах не равна размеру стороны, то срабатывает exception
				&& (abs(sq[i].p.x - sq[0].p.x) != sq->side 
				|| abs(sq[i].p.y - sq[0].p.y) != sq->side) 
				&& (sq[i].p.x - sq[0].p.x != 0) && (sq[i].p.y - sq[0].p.y) != 0) // ≈сли разница в координатах = 0, то проверка стороны не происходит
				throw ex;
		}
	}
	catch (exception ex) {
		cout << "Incorrect coords of point, this is a square!" << endl;
	}
	cout << "Input vector's coordinats: " << endl;
	cout << "X: "; cin >> v1;
	cout << "Y: "; cin >> v2;

	ChangeSquarePoint(sq, &v1, &v2);
	BuildSquare(sq);

	cout << endl; ///
	
	cout << "Input long of side: ";
	cin >> sq->side;
	try {
		for (int i = 0; i < 4; i++)
		{
			cout << "Input x coord of " << i + 1 << " point: ";
			cin >> sq->p.x;
			cout << "Input y coord of " << i + 1 << " point: ";
			cin >> sq->p.y;
			if (i > 0 
				&& (abs(sq[i].p.x - sq[0].p.x) != sq->side 
				|| abs(sq[i].p.y - sq[0].p.y) != sq->side)
				&& (sq[i].p.x - sq[0].p.x != 0) && (sq[i].p.y - sq[0].p.y) != 0)
				throw ex;
		}
	}
	catch (exception ex) {
		cout << "Incorrect coords of point, this is a square!" << endl;
	}
	cout << "Input vector's coordinats: " << endl;
	cout << "X: "; cin >> v1;
	cout << "Y: "; cin >> v2;

	ChangeSquareLink(*sq, v1, v2);
	BuildSquare(sq);


	delete[] sq;

	system("pause");
	return 0;
}