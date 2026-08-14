#include <stdio.h>
#include <string.h>

int binarySearch(char a[][50], int low, int high, char key[])
{
    if(low > high)
        return -1;

    int mid = (low + high) / 2;

    if(strcmp(a[mid], key) == 0)
        return mid;
    else if(strcmp(a[mid], key) > 0)
        return binarySearch(a, low, mid - 1, key);
    else
        return binarySearch(a, mid + 1, high, key);
}

int main()
{
    char a[100][50], key[50];
    int n, i, result;

    printf("Enter number of strings: ");
    scanf("%d", &n);

    printf("Enter strings in ascending order:\n");
    for(i = 0; i < n; i++)
        scanf("%s", &a[i]);

    printf("Enter string to search: ");
    scanf("%s", &key);

    result = binarySearch(a, 0, n - 1, key);

    if(result != -1)
        printf("String found at position %d", result + 1);
    else
        printf("String not found");

    return 0;
}
