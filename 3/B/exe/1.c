#include <stdio.h>
#include <string.h>

int main()
{
    char str[100][50], search[50];
    int n, i, found = 0;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter %d strings:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%s", str[i]);
    }

    printf("Enter string to search: ");
    scanf("%s", search);

    printf("\nString found at positions: ");

    for(i = 0; i < n; i++)
    {
        if(strcmp(str[i], search) == 0)
        {
            printf("%d ", i + 1);
            found = 1;
        }
    }

    if(found == 0)
    {
        printf("String not found");
    }

    return 0;
}
