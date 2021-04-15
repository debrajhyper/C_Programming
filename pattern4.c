#include <stdio.h>

int main() 
{
int n,i,j,k,t=0,arr[100],m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&m);
    for(i=0;i<n-2;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            for(k=j+1;k<n;k++)
            {
                if(arr[i]*arr[j]*arr[k]==m)
                {
                    t++;
                }
            }
        }
    }
    printf("%d",t);  
    return 0;
}
