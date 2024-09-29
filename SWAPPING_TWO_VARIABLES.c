#include<stdio.h>
int main ()
{
	double a, b;
	printf("Enter value of A: ");
	scanf("%lf",&a);
	printf("Enter value of B: ");
	scanf("%lf",&b);
	a=a-b;
	b=a=b;
	a=b=a;
	printf("After Swapping, A=%.2lf",a);
	printf("\nAfter Swapping, B=%.2lf",b);
return 0;
}
