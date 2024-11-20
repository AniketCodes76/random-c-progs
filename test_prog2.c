#include<stdio.h>
void main()
{
    int a,b;
    printf("enter the range :");
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        while(b<=a)
        {
            printf("%d\t",b);
            b=b+2;
        }
    }
    else
    {
        while(a<=b)
        {
            printf("%d\t",a);
            a=a+2;
        }
    }
}