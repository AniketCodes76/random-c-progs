#include<stdio.h>
void main()
{
    int s=0,p=1,a,d;
    printf("enter the number: \t");
    scanf("%d",&a);
    while(a>0)
    {
        d=a%10;
        if(d%2==0)
        {
            s=s+d;
        }
        else
        {
            p=p*d;
        }
        a/=10;
    }
    printf("the sum is =%d and product is =%d",s,p);
}