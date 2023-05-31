#include<iostream>
#include<math.h>

using namespace std;
int main()
{
	float x1,x2,e=0.0001,x;
	float a,b;
	do{
	cout<<"enter two initial guess"<<endl;
	cin>>x1>>x2;
	a=(x1*x1)-(4*x1)-10;
	cout<<a<<endl;
	b=(x2*x2)-(4*x2)-10;
	cout<<b;
}
while (a*b>0);
do{
x=(x1-((a*(x2-x1))/(b-a)));
cout<<x<<endl;
float c=(x*x)-(4*x)-10;
if (c*a<0){
	x2=x;
	b=c;
}
else {
	x1=x;
	a=c;
}
cout<<(fabs(x2-x1))<<endl;}
while (fabs(x2-x1)>e);
cout<<"root is :"<<x;

}
