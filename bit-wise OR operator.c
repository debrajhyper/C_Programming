#include<stdio.h>
int main()
{
	fflush(stdin);
	int a,b;
	printf("Enter the 1st value:%d");
	scanf("%d",&a);
	fflush(stdin);
	printf("Enter the 2nd value:%d");
	scanf("%d",&b);
	int bitwise_or=a|b;
	printf("the bitwise OR operator is: %d",bitwise_or);
	return 0;
}
