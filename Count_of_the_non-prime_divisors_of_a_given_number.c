#include<stdio.h>
int main(){
    int n,i,j,c,c1=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        c=0;
        if(n%i==0)
        {
            for(j=1;j<=i;j++)
            {
                if(i%j==0)
                {
                    c++;
                }
            }
            if(c!=2)
            {
                c1++;
            }
        }
    }
    printf("%d",c1);
}