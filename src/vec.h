#ifndef __VEC__
#define __VEC__

#include <iostream>
#include <fstream>
#include <sstream>

class vec
{
private:
	double x[3];
public:
	// initialize
	vec& operator=(double);
	vec& operator=(double*);
	vec& operator=(const vec&);
	// algebra
	vec operator+(const vec&);
	vec operator-(const vec&);
	vec operator*(const double&);
	vec operator/(const double&);
	// dot, cross
	double operator*(const vec&);
	vec operator^(const vec&);// for cross product
	// io
	double &operator[](int);
	friend std::istream& operator>>(std::istream&,vec&);
	friend std::ostream& operator<<(std::ostream&,vec&);
	friend std::ifstream& operator>>(std::ifstream&,vec&);
	friend std::ofstream& operator<<(std::ofstream&,vec&);
	friend std::stringstream& operator>>(std::stringstream&,vec&);
	// other functions
	double norm();
	//debug
	void print();
};

#endif
