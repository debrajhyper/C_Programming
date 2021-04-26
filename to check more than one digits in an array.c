#include<stdio.h>
int main()
{
	int arr[1000],i,j,n;
	printf("enter the no of elements: ");
	scanf("%d",&n);
	printf("enter the array elements: \n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("the repeated element is: \n");
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(arr[i]==arr[j])
				printf("%d\n",arr[j]);
				
				
		}
	}
	return 0;
}
