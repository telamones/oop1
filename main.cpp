#include <iostream>
#include "complex.h"

int main()
{
    complex x;
    double x1, x2;
    cout << "enter x real and imag";
    cin >> x1 >> x2;
    x.setRe(x1);
    x.setIm(x2);

    complex y;
    double y1, y2;
    cout << "enter y real and imag";
    cin >> y1 >> y2;
    y.setRe(y1);
    y.setIm(y2);

    cout << "x+y = " << y.sum(x).get() << endl;
    cout << "x-y = " << y.dif(x).get() << endl;
    cout << "x*y = " << y.mul(x).get() << endl;
    cout << "x/y = " << y.divis(x).get() << endl;
}