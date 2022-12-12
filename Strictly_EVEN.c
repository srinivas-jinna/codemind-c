#include<stdio.h>
int main(){
int n,i,s;
scanf("%d",&n);
int a[n];
   for(int i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
   for(int i=0;i<n;i++)
        {
            if(a[i]%2!=1)
            {
                if(i%2==1)
                {
                    printf("False");
                    s=1;
                    break;
                }
            }
        }
        if(s!=1)
        {
             printf("True");
        }
}