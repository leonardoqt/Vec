#include <iomanip>
#include <cmath>
#include "vec.h"

//==========initialize================
vec & vec :: operator=(double B)
{
	x[0] = x[1] = x[2] = B;
	return *this;
}

vec & vec :: operator=(double* B)
{
	x[0] = B[0];
	x[1] = B[1];
	x[2] = B[2];
	return *this;
}

vec & vec :: operator=(const vec& B)
{
	x[0] = B.x[0];
	x[1] = B.x[1];
	x[2] = B.x[2];
	return *this;
}

//==========algebra================
vec  vec :: operator+(const vec& B)
{
	vec res;
	res.x[0] = x[0] + B.x[0];
	res.x[1] = x[1] + B.x[1];
	res.x[2] = x[2] + B.x[2];
	return res;
}

vec  vec :: operator-(const vec& B)
{
	vec res;
	res.x[0] = x[0] - B.x[0];
	res.x[1] = x[1] - B.x[1];
	res.x[2] = x[2] - B.x[2];
	return res;
}

vec  vec :: operator*(const double& B)
{
	vec res;
	res.x[0] = x[0]*B;
	res.x[1] = x[1]*B;
	res.x[2] = x[2]*B;
	return res;
}

vec  vec :: operator/(const double& B)
{
	vec res;
	res.x[0] = x[0]/B;
	res.x[1] = x[1]/B;
	res.x[2] = x[2]/B;
	return res;
}

//==========dot,cross================
double vec :: operator*(const vec& B)
{
	return x[0]*B.x[0] + x[1]*B.x[1] + x[2]*B.x[2];
}

vec vec :: operator^(const vec& B)
{
	vec res;
	res.x[0] = x[1]*B.x[2] - x[2]*B.x[1];
	res.x[1] = x[2]*B.x[0] - x[0]*B.x[2];
	res.x[2] = x[0]*B.x[1] - x[1]*B.x[0];
	return res;
}

//==========io================
double& vec :: operator[](int n)
{
	return x[n];
}
std::istream& operator>>(std::istream& in, vec &B)
{
    in>>B.x[0]>>B.x[1]>>B.x[2];
    return in;
}

std::ostream& operator<<(std::ostream& out, vec &B)
{
    out<<std::fixed<<std::setw(18)<<std::setprecision(9)<<B.x[0]<<std::setw(18)<<std::setprecision(9)<<B.x[1]<<std::setw(18)<<std::setprecision(9)<<B.x[2];
    return out;
}

std::ifstream& operator>>(std::ifstream& in, vec &B)
{
    in>>B.x[0]>>B.x[1]>>B.x[2];
    return in;
}

std::ofstream& operator<<(std::ofstream& out, vec &B)
{
    out<<std::fixed<<std::setw(18)<<std::setprecision(9)<<B.x[0]<<std::setw(18)<<std::setprecision(9)<<B.x[1]<<std::setw(18)<<std::setprecision(9)<<B.x[2];
    return out;
}

std::stringstream& operator>>(std::stringstream& in, vec &B)
{
    in>>B.x[0]>>B.x[1]>>B.x[2];
    return in;
}

//==========other function================
double vec :: norm()
{
	return sqrt(x[0]*x[0] + x[1]*x[1] + x[2]*x[2]);
}

//==========debug================
void vec :: print()
{
	std::cout<<x[0]<<'\t'<<x[1]<<'\t'<<x[2]<<std::endl;
}
