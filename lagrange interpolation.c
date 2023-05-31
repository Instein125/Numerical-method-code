#include<stdio.h>

int main()
{
	int n,i,j;
	float a[20],b[20],sum=0;
	float x;
	printf("enter the no of data points:");
	scanf("%d",&n);
	printf("Enter the given data x:");
	for (i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	printf("Enter f(x):");
	for (i=0;i<n;i++)
	{
		scanf("%f",&b[i]);
	}
	printf("Enter the value to be predicted:");
	scanf("%f",&x);
	for (i=0;i<n;i++)
	{
		float cal=1;
		for (j=0;j<n;j++)
		{
			if (j!=i)
			{
				cal=cal*((x-a[j])/(a[i]-a[j]));
			}
		}
		sum=sum+(b[i]*cal);
	}
	printf("the result is :%f",sum);
}
