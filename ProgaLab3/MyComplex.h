#pragma once
#include <math.h>
#include <ostream>
using namespace std;

class ComplexNumber
{
private:
	double real, imaginary;
public:
	ComplexNumber();
	ComplexNumber(double);
	ComplexNumber(double, double);
	ComplexNumber(ComplexNumber&);
	~ComplexNumber() {};
	friend ComplexNumber operator + (const ComplexNumber&, const ComplexNumber&);
	friend ComplexNumber operator * (const ComplexNumber&, const ComplexNumber&);
	friend ComplexNumber operator * (const double&, const ComplexNumber&);
	friend ComplexNumber operator * (const ComplexNumber&, const double&);
	friend double operator ~ (const ComplexNumber&);
	friend ostream& operator << (ostream&, const ComplexNumber&);
};

