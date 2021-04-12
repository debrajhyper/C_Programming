#include<stdio.h>
int main()
{
	int var;
	printf("enter the variable:");
	scanf("%d",&var);
	printf("variable %d * 2=%d\n",var,var<<1);
	printf("variable %d * 4=%d\n",var,var<<2);
	printf("variable %d * 8=%d\n",var,var<<3);
	printf("variable %d * 16=%d\n",var,var<<4);
	return 0;
}
