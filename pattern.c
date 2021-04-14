#include <stdio.h>
int main() 
{
    int i,j,n;
    scanf("%d", &n);
    int len = n*2 - 1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            int min = i < j ? i : j;
            //printf("   %d   ",min);
            min = min < len-i ? min : len-i-1;
            //printf(" %d ",min);
            min = min < len-j-1 ? min : len-j-1;
            printf("%d ", n-min);
        }
        printf("\n");
    }
    return 0;
}
