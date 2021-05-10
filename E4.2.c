//C program to print n harmonic series and their sum
#include<stdio.h>
void main()
{
	int n,i;
	float j,sum=1.0;
	printf("Enter a number to print the harmonic series:\n");
	scanf("%d",&n);
	printf("The %d harmonic series is\n 1",n);
	for(j=2;j<=n;j++)
	{
		sum = sum + (1/j);
		//printf(" + 1/%d ",j);
	}
	for(i=2;i<n;i++)
	{
		//sum = sum + (1/i);
		printf(" + 1/%d ",i);
	}
	printf("\nThe sum of %d harmonic series terms is %f",n,sum);
}
/*
OUTPUT:
Enter a number to print the harmonic series:
5
The 5 harmonic series is
 1 + 1/2  + 1/3  + 1/4
The sum of 5 harmonic series terms is 2.283334
*/
