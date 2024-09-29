#include<stdio.h>
int main()
{
	int arr[100],n,i,sum=0;
	printf("Enter the number of element you want insert: ");
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		printf("Enter element %d: ",i+1);
		scanf("%d",&arr[i]);
		sum+=arr[i];
	}
	printf("\n The sum of the Array is: %d",sum);
	printf("\n The average of the Array id: %0.2f",(float)sum/n);
	return 0;
}
