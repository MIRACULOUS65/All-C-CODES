#include<stdio.h>
int main()
{
    int a;
    int b;

    printf("enter the first number");
    scanf("%d",&a);

    printf("enter the second number");
    scanf("%d",&b);
    
    b=a-b;
    a=a-b;
    b=b+a;

    printf("the new first variable is: %d",a);

    printf("the new second variable is: %d",b);
    
}