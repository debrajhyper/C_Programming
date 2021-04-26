#include<stdio.h>
addition(int n);
{
	int dig,sum=0,k=0;
	printf("enter the no of digits : ");
	scanf("%d",&n);
	printf("enter the digits: ");
	while(k<n)
	{
		scanf("%d",&dig);
		sum=sum+dig;
		k++;
	}
	printf("the sum is: %d",sum);
	return 0;
}
int main()
{
	int arr[100],i,n;
//	int size=sizeof (int)/sizeof arr[0];
//	printf("%d",size);
	printf("how many digits you want to calculate along with operations: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		scanf("%d",&arr[i]);
	}
	switch(arr[100])
	{
		case '+':
			addition(int);
			break;
			
			
	}
	return 0;
}
