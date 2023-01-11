#include<stdio.h>
int main(){
    int n;
    float g1,g2,g3;
    scanf("%d",&n);
    g1=n*0.2+n*0.8+n;
    g2=n*0.25+n*0.9+n;
    g3=n*0.3+n*0.95+n;
    if(n<=10000)
    {
        printf("%.2f",g1);
    }
    else if(n<=20000)
    {
        printf("%.2f",g2);
    }
    else
    {
        printf("%.2f",g3);
    }
}