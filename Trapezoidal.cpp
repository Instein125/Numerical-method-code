#include<iostream>
#include<math.h>

using namespace std;

float f(float x)
{
	float fun=pow(x,3)+1;
	return fun;
}

int main()
{
	float a,b,h;
	cout<<"enter lower limit, upper limit and height: ";
	cin>>a>>b>>h;
	float n=(b-a)/h;
	float sum=(f(a)+f(b))/2;
	for(int i=1;i<=n-1;i++)
	{
		sum=sum+f(a+i*h);
	}
	cout<<"result is:"<<sum*h;
}
