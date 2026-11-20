#include <stdio.h>

int main()
{
	double a, b;

	a = 1.1;
	b = a * a;

	if(b == 1.21) 	printf("Passt: 1.1 * 1.1  = 1.21\n");
	else 			printf("Passt nicht: 1.1 * 1.1 != 1.21\n");

	printf("b: %.20lf\n", b);
}