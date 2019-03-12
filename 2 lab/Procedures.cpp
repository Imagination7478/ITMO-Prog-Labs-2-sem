#include "Procedures.h"
#include <vector>

Matrix Matrix::operator+=(Matrix & mx)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			this->ptrArr[i][j] += mx.ptrArr[i][j];
	return Matrix();
}

Matrix Matrix::operator -=(Matrix & mx)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			this->ptrArr[i][j] -= mx.ptrArr[i][j];
	return Matrix();
}

Matrix Matrix::operator*=(Matrix & mx)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			this->ptrArr[i][j] *= mx.ptrArr[i][j];
	return Matrix();
}

Matrix Matrix::operator*=(double var)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++)
			this->ptrArr[i][j] *= var;
	return Matrix();
}

bool Matrix::operator==(Matrix & mx)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			if (this->ptrArr[i][j] == mx.ptrArr[i][j])
				return true;
			else
				return false;
		}
}

bool Matrix::operator!=(Matrix & mx)
{
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 3; j++) {
			if (this->ptrArr[i][j] != mx.ptrArr[i][j])
				return true;
			else
				return false;
		}
}

bool Matrix::operator<(Matrix & mx)
{
	int matr1 = this->ptrArr[0][0] * (this->ptrArr[1][1] * this->ptrArr[2][2]) - (this->ptrArr[1][2] * this->ptrArr[2][1]);
	int matr2 = mx.ptrArr[0][0] * (mx.ptrArr[1][1] * mx.ptrArr[2][2]) - (mx.ptrArr[1][2] * mx.ptrArr[2][1]);
	if (matr1 < matr2)
		return true;
	else
		return false;
}

bool Matrix::operator>(Matrix & mx)
{
	int matr1 = this->ptrArr[0][0] * (this->ptrArr[1][1] * this->ptrArr[2][2]) - (this->ptrArr[1][2] * this->ptrArr[2][1]);
	int matr2 = mx.ptrArr[0][0] * (mx.ptrArr[1][1] * mx.ptrArr[2][2]) - (mx.ptrArr[1][2] * mx.ptrArr[2][1]);
	if (matr1 > matr2)
		return true;
	else
		return false;
}

Set::Set()
{
	set = new int[10];
	for (int i = 0; i < 10; i++)
		set[i] = -1;
}

Set Set::operator+(Set &setSecond)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->set[i] == setSecond.set[i]) {}
		else if (this->set[i] == -1)
			this->set[i] = setSecond.set[i];
		else {}
	}
	return *this;
}

Set Set::operator+=(int &num)
{
	if (this->set[num] == -1)
		this->set[num] = num;
	return *this;
}

Set Set::operator-=(int &num)
{
	if (this->set[num] != -1)
		this->set[num] = -1;
	return *this;
}

bool Set::operator==(Set & set)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->set[i] != set.set[i])
			return false;
	}
	return true;
}

bool Set::operator!=(Set & set)
{
	for (int i = 0; i < 10; i++)
	{
		if (this->set[i] == set.set[i])
			return false;
	}
	return true;
}

void Set::rebuild()
{
	delete[] this->set;
}


