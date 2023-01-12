#include<stdio.h>
int main ()
{
    int n,k,m,i,j;
    scanf("%d%d%d",&n,&k,&m);
    i=m*k;
    if(n%i==0)
    {
        printf("%d",n/i);
    }
    else
    {
        printf("%d",(n/i)+1);
    }
}