#include <stdio.h>
#include <math.h>
int main() {
    int n,s=0,d,su=0;
    printf("Enter number:");

    scanf("%d",&n);
    for(int j=1;j<=n;j++)
    {
    for(int i=j;i>0;i/=10)
        s++;

    for(int k=j;k>0;k/=10){
        d=k%10;
        su=su+(int)pow((int)d,(int)s);
    }
        if(su==j)
        printf("\n%d",su);
        s=0;
        su=0;
    }

    return 0;
}
