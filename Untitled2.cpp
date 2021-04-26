#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n,min,location=1,j,i;
    int a[100],diff[n];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
         if (a[i]<min)
        {
           min=a[i];
           location=i+1;
        }
    }



  for(i=0;i<n;i++)
     {
         if(min==a[i])
         {
             location=i;
             break;
         }
     }
    for(i=location+1;i<n;i++)
     {
         if(min==a[i])
         {
           diff[j]=i-location;
             j++;
             location=i;
         }
     }
    int k=j;
    min=diff[0];
    for(j=0;j<k;j++)
    {
        //intf("%d ",diff[]);
      if(diff[j]<min)
          min=diff[j];
    }
    printf("%d",min);
    
    

  
    return 0;
}

