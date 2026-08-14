#include <stdio.h>
#include <string.h>

int main()
{
    char a[100][50], key[50];
    int n, i, low, high, mid, result = -1;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings in alphabetical order:\n");
    for(i = 0; i < n; i++)
        scanf("%s", a[i]);

    printf("Enter string to search: ");
    scanf("%s", key);

    low = 0;
    high = n - 1;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(strcmp(a[mid], key) == 0)
        {
            result = mid;
            break;
        }
        else if(strcmp(a[mid], key) < 0)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(result != -1)
        printf("String found at position %d", result + 1);
    else
        printf("String not found");

    return 0;
}
