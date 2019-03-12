#pragma once
#include <vector>

class Matrix
{
public:
	double ptrArr[3][3];

	Matrix operator += (Matrix &mx);
	Matrix operator -= (Matrix &mx);
	Matrix operator *= (Matrix &mx);
	Matrix operator *= (double var);

	bool operator == (Matrix &mx);
	bool operator != (Matrix &mx);
	bool operator < (Matrix &mx);
	bool operator > (Matrix &mx);
};

class Set
{
public:
	int *set; // Массив
	Set();

	Set operator +(Set &setSecond);
	Set operator +=(int &num);
	Set operator -=(int &num);
	bool operator == (Set &set);
	bool operator != (Set &set);
	
	void rebuild();
};