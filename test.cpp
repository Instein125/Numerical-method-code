#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	float x=3, e=0.001, x1=x;
	float f1;
	float a;
	do{
	    x=x1;
		f1=(x*x)-(4*x)-10;
		a=(2*x)-4;
		x1=x-(f1/a);
		}
	while (fabs(x1-x)>e);
	cout<<"root is :"<<x1;
}
