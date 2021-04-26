#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char s[100000],i,j,count=0;
    gets(s);
    for(i=0;i<10;i++)
    {
        for(j=0;s[j]!='\0';j++)
        {
            if(s[j]-48==i)
            count++;
        }
        printf("%d ",count);
        count=0;
    }
    return 0;
}

