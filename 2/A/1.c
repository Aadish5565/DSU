#include<stdio.h>

void main()
{
    int a = 1 , b , n ;

    printf("enter a number ") ;
    scanf("%d", &b) ;

    printf("enter a postion ") ;
    scanf("%d", &n) ;

    a = a<<n ;

    if((a&b)>0)
        printf("the bit set");
    else
        printf("the bit is not set");
}
