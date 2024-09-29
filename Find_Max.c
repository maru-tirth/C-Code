#include<stdio.h>
int maximum (int x, int y)
{
	int z;
	z = (x>=y) ? x : y;
	return (z);
}
main()
{
	int a, b, c;
	printf ("\nA = ");
	scanf ("%d", &a);
	printf ("\nB = ");
	scanf ("%d", &b);
	printf ("\nC = ");
	scanf ("%d", &c);
	printf ("\n\nMaximum = %d", maximum (c, maximum (a, b)));
}
