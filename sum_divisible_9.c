#include<stdio.h>
void main()
{
    int a,d;
    printf("enter a number\t");
    scanf("%d",&a);
    int n=a;
    while (a>0)
    {
        d=a%10;
        printf("%d\t",d);
        a/=10;
    }
    if(n%9==0)
    {
        printf("the num is divisible by 9");
    }
    else{
        printf("the num is not divisble");
    }
    
}