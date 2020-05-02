/* Write a C program to add a new element in an existing array of n elements */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int a[100];
	int i,size,n,p;
	printf("ENTER THE SIZE OF THE ARRAY:\n");
	scanf("%d",&size);
	printf("ENTER THE ELEMENTS OF THE ARRAY:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("ENTER THE ELEMENT TO INSERT:\n");
	scanf("%d",&n);
	printf("ENTER THE ELEMENT POSITION:\n");
	scanf("%d",&p);
	if(p>size+1||p<=0)
	{
		printf("INVALID");
	}
	else
	{
		for(i=size;i>=p;i--)
		{
			a[i]=a[i-1];
		}
		a[p-1]=n;
		size++;
		printf("ARRAY ELEMENTS AFTER THE INSERTATION:\n");
		for(i=0;i<size;i++)
		{
			printf("%d\t",a[i]);
		}
	}
	getch();
}
