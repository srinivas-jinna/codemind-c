#include <stdio.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int l=n*2-1;
    for(int i=0;i<l;i++){
        for(int j=0;j<l;j++){
            int min = i < j ? i:j;
            min = min < l-i ? min:l-i-1;
            min = min < l-j-1 ? min:l-j-1;
            printf("%d ", n-min);
        }
        printf("
");
    }
    return 0;
}