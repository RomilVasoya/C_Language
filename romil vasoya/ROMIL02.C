#include<stdio.h>
#include<conio.h>

int main()
{
   int a,b,c;
   clrscr();
   printf("a:");
   scanf("%d:",&a);
   printf("b:");
   scanf("%d:",&b);
   c=a;
   a=b;
   b=c;

   printf("a:%d\nb:%d",a,b);
   getch();


  getch();
}