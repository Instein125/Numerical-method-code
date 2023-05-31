#include<iostream>
#include<math.h>

using namespace std;

float f(float x,float y)
{
	float fun=pow(x,2)+pow(y,2);
	return fun;
}

int main()
{
	float x=0,y=0,h=0.2;
	for(x=0;x<=0.4;x=x+h)
	{
	float m1=f(x,y);
	float m2=f(x+h/2,y+(m1*h)/2);
	float m3=f(x+h/2,y+(m2*h)/2);
	float m4=f(x+h,y+(m3*h)); 
	y=y+(m1+2*m2+2*m3+m4)*(h/6);}
	cout<<y;
}
