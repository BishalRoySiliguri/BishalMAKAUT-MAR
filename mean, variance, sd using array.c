/* Write a C program to find the arithmetic mean, variance and standard deviation any n values. */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
main()
{
	float num[100];
	float m,v,sd,sum=0.0,go=0.0;
	int i,n;
	printf("ENTERED NUMBER OF VALUES SHOULD BE UNDER 100\n");
	printf("ENTER THE NUMBER OF VALUES:\t");
	scanf("%d", &n);
	for(i=0;i<n;i++)
	{
		scanf("%f",&num[i]);
		sum=sum+num[i];
	}
	m=sum/n;
	for(i=0;i<n;i++)
	{
		go+=((num[i]-m)*(num[i]-m));
	}
	v=go/n;
	sd=sqrt(v);
	printf("\nMEAN=%f\nVARIANCE=%f\nSTANDARD_DEVIATION=%f",m,v,sd);
	getch();
}
