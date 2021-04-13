#include<stdio.h>
void num(int a[n],int n,int *max,int *min)
{
	int i;
	*min=*max=a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>*max)
		{
			*max=a[i];
		}
		else if(a[i]<*min)
		{
			*min=a[i];
		}
	}
}
int main()
{
	int i,n,j,min,max;
	printf("enter the length of an array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the array elements one by one :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	num(a[n],n,&max,&min);
	printf("largest element is: %d ",max);
	printf("\nsmallest element is: %d ",min);

return 0;
}

