
#pragma once
#include <iostream>
using namespace std;
class SquareMatrix
{
private:
	int rank;
	int** p;
public:
	SquareMatrix();
	int getRank() const { return rank; }
	int** getPointer() const { return p; }
	void setRank(int value) { rank = value; }
	void setElement(int row, int column, int value);
	bool Init(int value);
	void Read();
	void Display();
	int MatrixTrace();
	int SumOver();
	int SumUnder();
	void Memory();
	~SquareMatrix();
};