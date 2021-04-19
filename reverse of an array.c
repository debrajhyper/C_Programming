#include<stdio.h>
int main()
{
	int arr[1000],i,n;
	printf("enter the no of elements: ");
	scanf("%d",&n);
	printf("enter the array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("The revesed array is: ");	
	for(i=n-1;i>=0;i--)
	{
		printf(" %d ",arr[i]);
	}
	return 0;
}
