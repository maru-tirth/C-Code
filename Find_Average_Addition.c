#include<stdio.h>
float average(int x,int y,int z)
{
	float result;
	result=(x+y+z)/3;
	return result;
}
int addition(int x,int y,int z)
{
	int add;
	add=x+y+z;
	return add;
}
int main()
{ 
	int n1,n2,n3,sum,product;
	float avg;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	avg=average(n1,n2,n3);
	sum=addition(n1,n2,n3);
	printf("Average: %0.2f",avg);
	printf("\nAddition: %d",sum);
	return 0;
}
