#include<stdio.h>
int main(){
    int n,i,j;
    scanf("%d",&n);
    if(n%4==0)
    {
    i=n/4;
    printf("%d",i);
    }
    else
    {
    j=(n/4)+1;
    printf("%d",j);
    }
}