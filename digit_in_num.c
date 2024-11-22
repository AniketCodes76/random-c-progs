#include<stdio.h>
void main()
{
    int n,d,c=0,r,fl=0;
    printf("enter a number\n");
    scanf("%d",&n);
    printf("enter a digit\n");
    scanf("%d",&d);
    int n1=n;
    while(n1>0)
    {
        r=n1%10;
        if(d==r)
        {
            c=c+1;
            fl=1;
        }
        n1/=10;
    }
    if(fl==1)
    {
        printf("the number of digits are %d",c);
    }
    else if(fl==0){
        printf("not present");
    }
}