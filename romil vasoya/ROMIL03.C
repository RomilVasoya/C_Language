#include<stdio.h>
#include<conio.h>
main()
{       int c;
	float f;
	clrscr();
	printf("c:");
	scanf("%i",&c);
	f=(c*(9/5))+32;
	printf("farenheit:%f",f);
	getch();
}