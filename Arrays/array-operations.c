#include <stdio.h>

/*
1. Traversal: Visiting every element of an array exactly once
2. Insertion
*/

int main()
{
    // initializing an array at runtime
    int a[50], size, i;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Elements in array are:\n ");
    for (i = 0; i < size; i++)
    {
        printf("Element at %d: %d\n", i, a[i]);
    }
    return 0;
}
