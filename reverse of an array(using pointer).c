#include<stdio.h>
int main()
{
	int i,n,*p;
	printf("enter the length of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("enter the elements of an array: \n");
	for(p=a;p<a+n;p++)
	{
		scanf("%d",p);
	}
	printf("the reversed order is: ");
	for(p=a+n-1;p>=a;p--)
	{
		printf(" %d ",*p);
	}

return 0;
}

