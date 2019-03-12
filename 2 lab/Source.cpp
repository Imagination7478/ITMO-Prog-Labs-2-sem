// 4 è 7
#include <iostream>
#include "Procedures.h"
using namespace std;
//#define _Matrix
#define _Set

int main()
{
#ifdef _Matrix
	cout << "\t\t\t4 task" << endl;
	Matrix matr1, matr2;
	cout << "\tMultiply Matrix with num." << endl;
	cout << "\t\tInput first matrix: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matr1.ptrArr[i][j];

	double var;
	cout << "Input var: ";
	cin >> var;

	matr1 *= var;
	cout << "\t\tResult matrix: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << matr1.ptrArr[i][j] << " ";
		cout << endl;
	}

	cout << "\tMultiply Matrix with Matrix" << endl;
	cout << "\t\tInput second matrix: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matr2.ptrArr[i][j];

	matr1 *= matr2;

	cout << "\t\tResult matrix: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) 
			cout << matr1.ptrArr[i][j] << " ";
		cout << endl;
	}

	cout << "\tMatrix minus matrix" << endl;
	Matrix matr3;

	cout << "\t\tInput third matrix: " << endl;
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			cin >> matr3.ptrArr[i][j];

	matr2 -= matr3;

	cout << "\t\tResult matrix: " << endl;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			cout << matr2.ptrArr[i][j] << " ";
		cout << endl;
	}

	cout << "\tCompare first and second matrix" << endl;
	bool is = matr1 == matr2;
	cout << "First matrix == second? - " << is << endl;
	is = matr1 != matr2;
	cout << "First matrix != second? - " << is << endl;
	is = matr1 > matr2;
	cout << "First matrix > second? - " << is << endl;
	is = matr1 < matr2;
	cout << "First matrix < second? - " << is << endl;
#endif

#ifdef _Set
	cout << endl << "\t\t\t7 task" << endl;
	Set set1, set2;

	int size1, size2; 
	int num;
	int variable;

	cout << "\t\tInput First set: " << endl;
	cout << "\tInput size: ";
	cin >> size1;
	cout << "\tInput elements: ";
	for (int i = 0; i < size1; i++) {
		cin >> num;
		set1.set[num] = num;
	}

	cout << "\t\tInput Second set: " << endl;
	cout << "\tInput size: ";
	cin >> size2;
	cout << "\tInput elements: ";
	for (int i = 0; i < size2; i++) {
		cin >> num;
		set2.set[num] = num;
	}

	set1.operator+(set2);
	set1 = set1 + set2;
	
	cout << "Your result set: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << set1.set[i] << " ";
	}

	cout << "\n\t\tAdd num in set: " << endl;
	cout << "\tInput variable: ";
	cin >> variable;
	set1.operator+=(variable);
	set1 += variable;

	cout << "Your result set: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << set1.set[i] << " ";
	}

	cout << "\n\t\tDelete num from set: " << endl;
	cout << "\tInput variable: ";
	cin >> variable;
	set1.operator-=(variable);
	set1 -= variable;

	cout << "Your result set: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << set1.set[i] << " ";
	}

	cout << "\n\t\tCompare sets (==): " << endl;
	if (set1.operator==(set2))
		cout << "true" << endl;
	else
		cout << "false" << endl;

	if(set1 == set2)
		cout << "true" << endl;
	else
		cout << "false" << endl;

	cout << "\n\t\tCompare sets (!=): " << endl;
	if (set1.operator!=(set2))
		cout << "false" << endl;
	else
		cout << "true" << endl;

	if (set1 != set2)
		cout << "false" << endl;
	else
		cout << "true" << endl;

	set1.rebuild();
	set2.rebuild();
#endif;

	system("pause");
	return 0;
}