#include<stdio.h>
int swap(int *ptr1,int *ptr2)
{
	*ptr1=20;
	*ptr2=10;
}
int main()
{
	int a=10;
	int b=20;
	swap(&a,&b);
	printf("%d %d",a,b);
	return 0;
}
