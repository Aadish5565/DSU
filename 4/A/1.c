#include <stdio.h>

int main() {
    int low, mid, high, key, i, n, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];

    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &key);

    low = 0;
    high = n - 1;

    while(low <= high) {
        mid = (low + high) / 2;
        if(a[mid] == key) {
            printf("Element found at position %d", mid + 1);
            found = 1;
            break;
        }
        else if(a[mid] > key)
            high = mid - 1;
        else
            low = mid + 1;
    }

    if(!found)
        printf("Element not found\n");

    return 0;
}
