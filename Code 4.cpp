/* program to calculate & print electricity bill */
#include<stdio.h>
#include<conio.h>
main()
{
	int a, b, big;
	printf("\n Enter two numbers : ");
	scanf("%d %d", &a, &b);
	if(a > b)
	big = a;
	else
	big = b;
	printf("\n Biggest numbers = %d" ,big);
	getch();
}
