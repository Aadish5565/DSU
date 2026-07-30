#include <stdio.h>

int main()
{
    int a[5];

    printf("Size of one element = %lu bytes\n", sizeof(a[0]));
    printf("Size of entire array = %lu bytes\n", sizeof(a));
    printf("Number of elements = %lu\n", sizeof(a) / sizeof(a[0]));

    return 0;
}
