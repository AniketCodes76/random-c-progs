#include<stdio.h>
void main()
{
    int a,c=0;
    printf("enter a number");
    scanf("%d",&a);
    for (int i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        printf("it is prime");
    }
    else
        printf("not");
}