/* Write a C program to find the sum of the digits of input number */
#include<stdio.h>
main()
{
	int n,b,s=0;
	printf("ENTER THE NUMBER:\t");
	scanf("%d",&n);
	while(n>0)
	{
		b=n%10;
		s=s+b;
		n/=10;
	}
	printf("\nTHE SUM IS:\t%d",s);
}
