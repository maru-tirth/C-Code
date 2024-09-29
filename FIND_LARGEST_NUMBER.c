#include<stdio.h>
int main()
{
int a,b,c,d,e;
printf("ENTER THE FIVE NUMBERS: \n");
scanf("\n %d %d %d %d %d", &a,&b,&c,&d,&e); 
if(a>b && a>c && a>d && a>e)
	printf("The Largest Number Entred is %d", a);
	else if(b>a && b>c && b>d && b>e)
	printf("The Largest Number Entred is %d", b);
	else if(c>a && c>b && c>d && c>e)
	printf("The Largest Number Entred is %d", c);
	else if(d>a && d>b && d>c && d>e)
	printf("The Largest Number Entred is %d", d);
	else if(e>a && e>c && e>d && e>b)
	printf("The Largest Number Entred is %d", e);
	return 0;
}
