/* Write a C program to swap two number using a temporary variable */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
main()
{
	int C, D, X;
	printf("\nTYPE THE FIRST NUMBER\t");
	scanf("%d", &C);
	printf("\nTYPE THE SECOND NUMBER\t");
	scanf("%d", &D);
	X=C;
	C=D;
	D=X;
	printf("\nTHE RESULT IS \t%d\t%d", C, D);
	getch();
}

