
#include "SquareMatrix.h"
#include <iostream>
using namespace std;

SquareMatrix::SquareMatrix()
{
    cout << "constructor is working" << endl;

    p = nullptr;
    rank = 0;
}

void SquareMatrix::setElement(int row, int column, int value)
{
    p[row][column] = value;
}

bool SquareMatrix::Init(int value)
{
    cout << "Init is working" << endl;

    if (value > 0) {
        setRank(value);
        return true;
    }
    else
        return false;
}

void SquareMatrix::Read()
{
    cout << "Read is working" << endl;

    int value;
    do {
        cout << "matrix rank = " << endl;
        cin >> value;
    } while (!Init(value));

    p = new int* [rank];
    for (int i = 0; i < rank; i++)
        p[i] = new int[rank];

    for (int i = 0; i < rank; i++)
        for (int j = 0; j < rank; j++) {
            cout << "element[" << i << "][" << j << "] = " << endl;
            cin >> p[i][j];
        }
}

void SquareMatrix::Display()
{
    cout << "Display is working" << endl;

    cout << "rank = " << rank << endl;

    cout << endl;

    for (int i = 0; i < rank; i++) {
        for (int j = 0; j < rank; j++) {
            cout << " " << p[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl;

}

int SquareMatrix::MatrixTrace()
{
    cout << "Trace is working" << endl;

    int S = 0;
    for (int i = 0, j = 0; i < rank; i++, j++)
        S += p[i][j];
    return S;
}

int SquareMatrix::SumUnder()
{
    cout << "Over is working" << endl;

    int S = 0;
    for (int i = 1; i < rank; i++)
        for (int j = 0; j < i; j++)
            S += p[i][j];
    return S;
}

void SquareMatrix::Memory()
{
    int y = rank;
    p = new int* [y];
    for (int i = 0; i < y; i++)
        p[i] = new int[y];
}

int SquareMatrix::SumOver()
{
    cout << "Under is working" << endl;

    int S = 0;
    for (int i = 0; i < rank; i++)
        for (int j = rank - 1; j > i; j--)
            S += p[i][j];
    return S;
}

SquareMatrix::~SquareMatrix()
{
    cout << "destructor is working" << endl;

    for (int i = 0; i < rank; i++) {
        delete[] p[i];
    }
    delete[] p;
}