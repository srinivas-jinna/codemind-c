#include<stdio.h>
int main(){
    int n,i,j,c,k;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        c=0;
        k=0;
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               c++;
           }
       }
       for(j=0;j<i;j++)
       {
           if(a[i]>a[j])
           {
               k++;
           }
       }
       printf("%d ",c+k);
    }
}