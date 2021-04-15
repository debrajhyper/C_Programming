#include<stdio.h>
int prime(int x,int y)
{
	int i,j,count=0;
	for(i=x;i<=y;i++)
	{
		count=0;
		for(j=2;j<i;j++)
		{
			if(i%j==0)
			{
				count++;
				break;
			}	
		}
		if(count==0)
			{
				printf("\n%d\n",i);
			}
	}
}
int main()
{
	int x,y;
	printf("enter the 1st no: ");
	scanf("%d",&x);
	printf("enter the 2nd no: ");
	scanf("%d",&y);
	printf("The prime numbers between %d to %d are follows: ",x,y);
	prime(x,y);
	return 0;
}
