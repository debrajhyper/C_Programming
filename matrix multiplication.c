#include<stdio.h>
int main()
{
	int arr1[100][100],arr2[100][100],arr3[100][100],r,c,i,j,k,sum=0;
	printf("enter the no of rows and column: \n");
	scanf("%d %d",&r,&c);
	if(r==c)
	{
		printf("enter the 1st matrix: \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&arr1[i][j]);
			}
		}
		printf("enter the 2nd matrix: \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				scanf("%d",&arr2[i][j]);
			}
		}
		printf("the result of matrix multiplication is: \n");
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				for(k=0;k<c;k++)
				{
					sum+=arr1[i][k]*arr2[k][j];
				}
			arr3[i][j]=sum;
			sum=0;
			}
		}
		for(i=0;i<r;i++)
		{
			for(j=0;j<c;j++)
			{
				printf(" %d ",arr3[i][j]);
			}
			printf("\n");	
		}	
	}
	else
	{
		printf("the entered row and column are not equal!\nhence matrix multiplication is not posible!");
		
	}
	return 0;
}
