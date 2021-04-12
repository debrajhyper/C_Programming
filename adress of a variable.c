#include<stdio.h>
int main()
{
	int i=10;
	int *p=&i;
	fflush(stdin);
	printf("the adress of %d is %p",i,i);

return 0;
}

