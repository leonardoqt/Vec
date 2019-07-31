#include <iostream>
#include <fstream>
#include <sstream>
#include <cstring>
#include "vec.h"

using namespace std;

int main()
{
	ifstream in;
	ofstream out;
	string tmp;
	stringstream ss;
	vec v1,v2,v3;
	double d[3]={1,2,3};
	
	// initialize
	v1=1;
	v2=&d[0];
	v3=v2;
	cout<<"Initialize"<<endl;
	v1.print(); v2.print(); v3.print();
	
	// algebra
	cout<<"Algebra"<<endl;
	v3 = v2+v1; v3.print();
	v3 = v2+v1+v1; v3.print();
	v3 = v2-v1; v3.print();
	v3 = v2-v1-v1; v3.print();
	v3 = v2*2; v3.print();
	v3 = v2/2; v3.print();
	v3 = v2+v1*2; v3.print();
	
	// dot, cross
	cout<<"dot, cross"<<endl;
	cout<<v1*v2<<endl;
	v3 = v1^v2; v3.print();
	cout<<(v1^v2)*v3<<endl;
	
	// other function
	cout<<"norm"<<endl;
	cout<<v1.norm()<<endl;
	
	// io
	v1[0] = 0;
	v1.print();
	//
	cin>>v3;
	//
	cout<<v3<<endl;
	//
	out.open("test.dat");
	out<<v3<<endl;
	out.close();
	//
	in.open("test.dat");
	in>>v3;
	v3.print();
	//
	in.clear(); in.seekg(ios::beg);
	getline(in,tmp);
	ss<<(tmp);
	ss>>v3;
	v3.print();
	return 0;
}
