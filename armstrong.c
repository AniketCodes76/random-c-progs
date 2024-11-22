#include<stdio.h>
void main()
{
    int i,j,d,s=0,n;
    for(i=100;i<1000;i++)
    {
        n=i;
        s=0;
        for(j=i;j>0;j/=10)
        {
            d=j%10;
            s=s+(d*d*d);
        }
        if(s==n)
        {
            printf("%d \t",n);
        }
    }
}