#include<stdio.h>
int main(){
    int i,n,j,k=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int c=0;
        for(j=1;j<=i;j++)
        {
            if(i%j==0)
            {
                c++;
            }
        }
        if(c==9)
        {
            k++;
            printf("%d ",i);
        }
    }
    printf("
Total=%d",k);
}