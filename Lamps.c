#include<stdio.h>
int main(){
    int n,k,x,y,t1,t2,t3;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if(y>x)
    {
    printf("%d",x*n);
    }
    else
    {
        t1=k*x;
        t2=n-k;
        t3=t2*y;
        printf("%d",t1+t3);
    }
    
}