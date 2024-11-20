#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter three numbers");
    scanf("%d %d %d",&a,&b,&c);
    if((a>b&&a<c)||(a<b&&a>c))
    {
        printf("second largest is %d",a);
    }
    else if((b>a&&b<c)||(b<a&&b>c))
    {
        printf("second largest is %d",b);
    }
    else{
        printf("the second largest is %d",c);
    }
}