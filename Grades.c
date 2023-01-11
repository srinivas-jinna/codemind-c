#include<stdio.h>
int main(){
    int p,m,b,c,it,avg;
    scanf("%d%d%d%d%d",&p,&b,&c,&m,&it);
    avg=(p+b+c+m+it)/5;
    if(avg>=90)
    {
        printf("Grade A");
    }
    else if(avg>=80)
    {
       printf("Grade B");
    }
    else if(avg>=70)
    {
        printf("Grade C");
    }
    else if(avg>=60)
    {
        printf("Grade D");
    }
    else if(avg>=40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
}