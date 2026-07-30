#include<stdio.h>

void main()
{
        int n , i , search , index , flag;

        printf("enter no of element in array : ");
        scanf("%d",&n) ;

        int arr[n] ;

        printf("enter element of the array :") ;
        for(i=0;i<n;i++)   {
            scanf("%d",&arr[i]) ;
        }

        printf("enter value to search : ") ;
        scanf("%d",&search) ;

        for(i=0;i<n;i++)   {
            if(search == arr[i])   {
                index = i + 1 ;
                flag = 1 ;
                break ;
            }
            else   {
                flag = 0 ;
            }
        }

        if(flag=1)
            printf("element found at %d", index);
        else
            printf("element not found")  ;
}
