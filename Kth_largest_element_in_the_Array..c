#include <stdio.h>  
int main ()  
{  
    int i,j,k,n,l,t,f;  
    scanf ("%d",&n); 
    int arr[n];
    for(i=0;i<n;i++)  
    {  
        scanf("%d",&arr[i]);  
    }
    scanf("%d",&f);
    for(i=0;i<n;i++)  
    {  
        for(l=i+1;l<n;l++)
        {
           if(arr[i]<arr[l])
           {
               t=arr[i];
               arr[i]=arr[l];
               arr[l]=t;
           }
        }
    }
    printf("%d",arr[f-1]);
}  