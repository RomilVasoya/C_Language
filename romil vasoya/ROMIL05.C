#include<stdio.h>
#include<conio.h>
main()
{
    int a;
    clrscr();
    printf("enter value of a:");
    scanf("%d",&a);
    if(a>0){
       printf("the number is positive");

	}
       else if(a==0){
       printf("the number is natarul");
       }
       else{
       printf("the number is nagative");
       }
    getch();


}