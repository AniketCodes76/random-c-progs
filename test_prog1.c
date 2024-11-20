#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
        if(b>c&&c<a);
            printf("the second largest is %d",b);
    }
    else if(b>a)
    {
        if(a>c&&c<b);
            printf("the second largest is %d",a);
    }
    else 
    {
        printf("the second largest is %d",c);
    }
}