#include<stdio.h>
int main()
{
	int n, res;
	printf ("Enter number to find factorial: ");
	scanf ("%d", &n);
	res = factorial (n);                                                                      
	printf ("Factorial is %d", res);
}
    int factorial (int n)
    {
    	int i;
    	long int prod = 1;
    	if (n > 1)
    	{
    	for (i = 2; i <= n; ++i)
    	prod *= i;
		}
	    return (prod);
}
