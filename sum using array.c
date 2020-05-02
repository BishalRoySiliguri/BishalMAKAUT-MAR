/* Write a C program to find the sum of the given n integers using an array. */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int num[100];
	int n,i,sum=0;
	printf("TYPE THE NUMBER OF ELEMENTS TO ADD:\t");
	scanf("%d",&n);
	if(n>100)
	printf("\nENTERED NUMBER SHOULD BE LESS THAN HUNDRED");
	printf("\nENTER THE ELEMENTS:\t");
	for(i=0;i<n;i++)
	{
		scanf("%d",num[i]);
		sum=sum+num[i];
	}
	printf("\nTHE ELEMENTS ARE:\t");
	for(i=0;i<n;i++)
	{
		printf("\nELEMENT[%d]=%d",i,num[i]);
	}
	printf("\n");
	printf("\nTOTAL:%d",sum);
	getch();
	
}
