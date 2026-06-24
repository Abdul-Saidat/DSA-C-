#include <stdio.h>

// To delete an element from an array
int main()
{
    int a[50], size, pos, item;
    printf("Enter size of array");
    scanf("%d", &size);
    printf("Enter elements in array: ");
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("From what position do you want to delete? ");
    scanf("%d", &pos);

    if (pos <= 0 || pos > size)
    {
        printf("Invalid position");
    } 
    item = a[pos-1];
    printf("Deleted Element: %d", item);
    for (int i = pos-1; i < size-1; i++)
    {
        a[i] = a[i+1];
    }
    size--;
    return 0;
}