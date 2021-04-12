#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the 1st no: ");
	scanf("%d",&a);
	printf("enter the 2nd no: ");
	scanf("%d",&b);
	int bitwise_xor=a^b;
	printf("the bitwise XOR operator is : %d",bitwise_xor);
	return 0;
}
