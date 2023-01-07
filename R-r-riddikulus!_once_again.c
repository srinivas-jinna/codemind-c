
#include<stdio.h>
int main()
{
    int n,d,i;
    scanf("%d %d",&n,&d);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=d;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    for(i=0;i<d;i++)
    {
        printf("%d ",a[i]);
    }
}