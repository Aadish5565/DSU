#include <stdio.h>

int main()
{
    int a[100], n, i, search, comparisons = 0, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    for(i = 0; i < n; i++)
    {
        comparisons++;

        if(a[i] == search)
        {
            printf("Element found at position %d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
        printf("Element not found\n");

    printf("Number of comparisons = %d", comparisons);

    return 0;
}
