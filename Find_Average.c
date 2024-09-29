#include<stdio.h>
float average(int x,int y,int z)
{
	float result;
	result=(x+y+z)/3;
	return result;
}
int main()
{ 
	int n1,n2,n3;
	float avg;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&n1,&n2,&n3);
	avg=average(n1,n2,n3);
	printf("\nAverage: %0.2f",avg);
	return 0;
}
