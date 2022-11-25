#include<stdio.h>
#include<conio.h>

main()
{        int bs;
	 int hr;
	 int da;
	 int ta;
	 int c;
	 int h;
	 clrscr();
	 scanf("%d",&c);
	 bs=c;
	 hr =bs*10/100;
	 da=bs*5/100;
	 ta=bs*8/100;
	 h=bs+hr+da+ta;
	 printf("%d",h);

	 getch();
}