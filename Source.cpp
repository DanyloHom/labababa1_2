
#include <iostream>
#include "SquareMatrix.h"
using namespace std;



int main()
{
    SquareMatrix a, v;
    a.Read();
    a.Display();

    cout << "Matrix Trace = " << a.MatrixTrace() << endl;
    cout << "Sum of Elements over main diagonal = " << a.SumOver() << endl;
    cout << "Sum of Elements under main diagonal = " << a.SumUnder() << endl;

}