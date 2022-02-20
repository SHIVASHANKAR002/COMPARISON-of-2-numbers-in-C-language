#include<stdio.h>
#include<conio.h>
void main()
{
	int a;
	int b;
	printf ("\nHi! I am your calculator for comparision please enter number 1 : ");
	scanf ("%d",&a);
	printf ("\n Enter number 2 : ");
	scanf ("%d",&b);
	if (a>b)
	{
		printf("number 1 is greater than number 2");
	}
	else if (b>a)
	{
		printf ("number 1 is less than number 2");
	}
	else
	{
		printf ("number 1 and number 2 are equal");
	}
	getch();
}