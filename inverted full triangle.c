#include<stdio.h>
int main()
{ int n;
   // scanf("%d",&n);

int j=0;
for(int i=1;i<=10;i++)
{

    for(j=2;j<=i;j++)
        printf("   ");

    for(int k=10;k>=j;k--)
        printf(" * ");

   for(int l=10;l>j;l--)
       printf(" * ");


    printf("\n");
}




return 0;
}
