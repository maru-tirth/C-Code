#include<stdio.h>
int main ()
{
	double first, second, tempory;
	printf("Enter First Number : ");
	scanf("%lf",&first);
	printf("Emter Second Number : ");
	scanf("%lf",&second);
	tempory=first;
	first=second;
	second=tempory;
	printf("\nAfter swapping, First number=%.3lf", first);
	printf("\nAfter swapping, Second number=%.3lf", second);
	return 0;
}
