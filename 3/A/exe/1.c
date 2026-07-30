#include <stdio.h>

int main()
{
    int a[100], n, i, search, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &a[i]);

    printf("Enter element to search: ");
    scanf("%d", &search);

    printf("Element found at positions: ");

    for(i = 0; i < n; i++)
    {
        if(a[i] == search)
        {
            printf("%d ", i + 1);
            found = 1;
        }
    }

    if(found == 0)
        printf("Element not found");

    return 0;
}
