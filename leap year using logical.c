#include<stdio.h>
int main()
{
    int year,c=0;
    printf("Enter year:");
    scanf("%d",&year);

    if(year>1000 & year%4==0)
        printf("Leap year");
    else
        printf("Not Leap year");



    return 0;
}


year%400
