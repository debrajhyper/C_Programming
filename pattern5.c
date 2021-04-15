#include <stdio.h>

int main() 
{
    long int n,i,j,k,l,m;
    scanf("%ld",&n);
    j=n;
    for(i=0;i<n;i++)
    {
        for(k=1;k<=j;k++)
        {
            printf("%ld",k);
        }
        for(l=0;l<2*i;l++)
        {
            printf("*");
        }
        for(m=j;m>=1;m--)
        {
            printf("%ld",m);
        }
        printf("\n");
        j--;
    } 
    return 0;
}
