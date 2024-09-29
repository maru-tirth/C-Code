#include<stdio.h>
int main()
{
	int n;
	printf("Enter a number: ");
	scanf("%d",&n);
	if(n<0)
	printf("Entered number is Negative.");
	else if(n>0)
	printf("Entered number is Positive");
	else
	printf("Entered number is Zero");
	return 0;
}
