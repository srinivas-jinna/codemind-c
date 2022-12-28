#include<stdio.h>
int main(){
    int n,i,j,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        int c=0;
        while(a[i]!=0)
        {
            j=a[i]%10;
            c++;
            a[i]=a[i]/10;
        }
        if(c%2==0)
        {
            k++;
        }
    }
    printf("%d",k);
}