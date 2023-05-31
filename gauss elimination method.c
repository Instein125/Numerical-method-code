#include<stdio.h>

int main()
{
	int n,i,j,k;
    float a[10][10],c,x[10];
	printf("enter the no of variable:");
	scanf("%d",&n);
	printf("enter the data");
	for(i=0;i<n;i++)
	{
	 	for(j=0;j<=n;j++)
	 	{
	 		scanf("%f",&a[i][j]);
		} 
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			if(i>j)
			{
				c=a[i][j]/a[j][j];	
			
			for(k=0;k<=n;k++)
			{
				a[i][k]=a[i][k]-c*a[j][k];	
			}
		    }
		}
	}
	x[n-1]=a[n-1][n]/a[n-1][n-1];
	for (i=n-2;i<0;i--)
	{
		float sum=0;
		for (j=i;j<n;j++)
		{
			sum=sum+(a[i][j]*x[j]);
		}
		x[i]=(a[i][n]-sum)/a[i][i];
	}
     			for(i=0;i<n;i++)
     			{
     				printf("\n the roots are:%f",x[i]);
				 }
}
