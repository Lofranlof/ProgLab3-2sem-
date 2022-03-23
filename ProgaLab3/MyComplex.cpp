#include "MyComplex.h"
ComplexNumber::ComplexNumber()
{
	real = 0;
	imaginary = 0;
}

ComplexNumber::ComplexNumber(double re)
{
	real = re;
	imaginary = 0;
}

ComplexNumber::ComplexNumber(double re, double im)
{
	this->real = re;
	this->imaginary = im;
}

ComplexNumber::ComplexNumber(ComplexNumber& number)
{
	this->real = number.real;
	this->imaginary = number.imaginary;
}

ComplexNumber operator + (const ComplexNumber& left, const ComplexNumber& right)
{
	ComplexNumber temp;
	temp.real = left.real + right.real;
	temp.imaginary = left.imaginary + right.imaginary;
	return temp;
}

ComplexNumber operator * (const ComplexNumber& left, const ComplexNumber& right)
{
	ComplexNumber temp;
	temp.real = ((left.real * right.real) - (left.imaginary * right.imaginary));
	temp.imaginary = ((left.real * right.imaginary) + (right.real * left.imaginary));
	return temp;
}

ComplexNumber operator * (const ComplexNumber& left, const double& right)
{
	ComplexNumber temp;
	temp.real = left.real * right;
	temp.imaginary = left.imaginary * right;
	return temp;
}

ComplexNumber operator * (const double& left, const ComplexNumber& right)
{
	ComplexNumber temp;
	temp.real = right.real * left;
	temp.imaginary = right.imaginary * left;
	return temp;
}

double operator ~ (const ComplexNumber& number)
{
	double temp = sqrt(pow(number.real, 2) + pow(number.imaginary, 2));
	return temp;
}

ostream &operator << (ostream &out, const ComplexNumber& number)
{
	out << number.real;
	if (number.imaginary > 0)
		out << "+";
	out << number.imaginary << "i";
	return out;
}
