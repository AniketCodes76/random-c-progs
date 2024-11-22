#include<stdio.h>
void main()
{
    int a,i,s=0,d;
    printf("enter a number: ");
    scanf("%d",&a);
    do
    {
        for(s=0;a!=0;a/=10)
        {
            d=a%10;
            s=s+d;
        }
        printf("the sum=%d\n",s);
        a=s;
    } while (a/10!=0);
    printf("\n");
}