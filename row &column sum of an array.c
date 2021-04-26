#include<stdio.h>
int main()
{
	int a[5][5]={
		{1,2,3,4,5},
		{7,4,3,6,7},
		{9,7,4,1,3},
		{1,4,6,3,5},
		{0,7,5,3,4}
		};
	int i,j,sum=0;
	printf("row sum: ");
	for(i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			sum+=a[i][j];
		}
		printf(" %d ",sum);
		sum=0;
	}
	
		printf("\ncolumn sum: ");
	for(j=0;j<5;j++)
	{
		for(i=0;i<5;i++)
		{
			sum+=a[i][j];
		}
		printf(" %d ",sum);
		sum=0;
	}
	return 0;
}
