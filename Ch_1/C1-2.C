#include<stdio.h>
#include<conio.h>
#define Pi 3.14
#define P printf
/*
	DataType :
		it specifies how much memory is assigned to value

	10, 20, 30	4 bytes	int   Intiger	%d, %i
	3.14, 2.5	4 bytes float Float     %f
	A-Z, a-z	1 byte  char  Character %c

	Variable :
		a container to store value.
	DataType varName = value;

	Keywords : 32

	int, char, float, const, if, else, switch, while, de, for, void

	Constant :
		- using 'const' keyword
		   - const variable must be initialized
		- using MACRO

*/
main()
{
	float r = 3;
	clrscr();
	P("Area of circle: %.2f",Pi * r * r);
	getch();
}
/*
	Area of circle : Pi * r * r


	Escape sequence character

	\n = new line
	\t = tab (8 location)

12345678
123456789

*/