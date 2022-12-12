#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=a[0];
    for(i=0;i<n;i++)
    {
        if(j<a[i])
        {
            j=a[i];
        }
    }
    printf("%d",j);
}