#include <stdio.h>

int main() 
{
    long int n,i,j,k;
    scanf("%ld",&n);
    for(i=1;i<=n;i++)
    {
        for(j=i;j>=1;j--)
        {
            printf(" %ld ",j);
        }
        for(k=j+2;k<=n-i+1;k++)
        {
            printf("%ld",k);
        }
        printf("\n");
    }
    return 0;
}

