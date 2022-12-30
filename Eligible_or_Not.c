#include<stdio.h>
int main(){
    int n,a,b,i,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(c>=a && c<b)
        {
            printf("YES
");
        }
        else
        {
            printf("NO
");
        }
    }
}