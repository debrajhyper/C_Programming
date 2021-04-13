#include<stdio.h>

int main()
{
	char arr[10];
	int i,n,j,temp;
	printf("enter the length of the array :\n");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",arr[i]);
		
		temp=arr[i];
		arr[i]=arr[n-1];
		arr[n-1]=temp;
		n--;
	}

return 0;
}

