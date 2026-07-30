#include <stdio.h>
#include <string.h>

void main()
{
    int n, i, flag = 0;
    char search[20];

    printf("Enter number of strings: ");
    scanf("%d", &n);

    char arr[n][20];

    printf("Enter the strings:\n");
    for(i = 0; i < n; i++) {
        scanf("%s", arr[i]);
    }

    printf("Enter string to search: ");
    scanf("%s", search);

    for(i = 0; i < n; i++) {
        if(strcmp(search, arr[i]) == 0) {
            printf("String found at position %d\n", i + 1);
            flag = 1;
            break;
        }
    }

    if(flag == 0)
        printf("String not found\n");
}

