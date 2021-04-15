#include<stdio.h>
#include<string.h>
char prmu(char *str , int l , int r){
	int i;
	if(l==r){
		printf("%s\n",str);
	}
	else{
		for(i=l;i<=r;i++){
			swap((str+l),(str+i));
			prmu(str , l+1 , r);
			swap((str+l),(str+i));
		}
	}
}
swap(char *s1 , char *s2){
	char temp;
	temp=*s1;
	*s1=*s2;
	*s2=temp;
}
int main()
{
	char str[20];
	printf("Enter the string: ");
	scanf("%s",str);
	int n = strlen(str);
	printf("All possible permutations of the given string: \n");
	prmu(str,0,n-1);

return 0;
}

