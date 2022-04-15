#include <iostream>
#include "complex.h"

void complex::setRe(double real)
{
    re=real;
}
double complex::getRe()
{
    return re;
}
void complex::setIm(double imag)
{
    im=imag;
}
double complex::getIm()
{
    return im;
}
complex complex::sum(complex n1)
{
    complex z;
    z.im=n1.im + this->im;
    z.re=n1.re + this->re;
    return z;
};

complex complex::dif(complex n1)
{
    complex z;
    z.im=n1.im - this->im;
    z.re=n1.re - this->re;
    return z;
};

complex complex::mul(complex n1)
{
    complex z;
    z.im=n1.re*this->im+n1.im*this->re;
    z.re=n1.re*this->re-n1.im*this->im;
    return z;
};

complex complex::divis(complex n1)
{
    complex z;
    z.im=(this->re*n1.im-n1.re*this->im)/(this->re*this->re+this->im*this->im);
    z.re=(n1.re*this->re+this->im*this->re)/(this->re*this->re+this->im*this->im);
    return z;
}