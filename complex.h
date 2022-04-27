#ifndef COMPLEX_H
#define COMPLEX_H

#include <string>

using namespace std;

class complex {
    double im;
    double re;
public:
    void setRe(double real);
    double getRe();
    void setIm(double imag);
    double getIm();
    complex sum(complex n1);
    complex dif(complex n1);
    complex mul(complex n1);
    complex divis(complex n1);

    string get() {
        return to_string(re) + " + " + to_string(im) + "*i";
    }

};

#endif