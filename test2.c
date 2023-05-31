#include<stdio.h>
#include<math.h>

int main()
{
	float x=5, e=0.0001, x1=0;
	float f1;
	float a;
	do{
	
		f1=(x*x)-(4*x)-10;
		a=(2*x)-4;
		x1=x-(f1/a);
		x=x1;}
	while (fabs(x1-x)>e);
	printf("result is %f",x);
}
