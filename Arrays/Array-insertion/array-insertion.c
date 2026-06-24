#include <stdio.h>

/* Array operation: insertion
 Given an array[50] = {6, 2, 0, 4, 5} and you want to insert a value at position 3, index 2, replacig the element at index 2 directly, overrides that element, hence, you can shift the elements, since the size of the array is large enough.Start swapping/moving from the last element
 We will look at 2 or 3 scenarios: 
 1. inserting at the beginning, 
 2. inserting at the end, 
 3. inserting within the array, 
 4. getting position and value to insert from user
*/

int main()
{
    //3. Inserting within the array
     int a[50], i, size, num, pos;
    printf("Enter size of array: ");
    scanf("%d", &size);
    printf("Enter elements of array: ");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Enter data you want to insert: ");
    scanf("%d", &num);
    printf("Enter position: ");
    scanf("%d", &pos);
    if (pos <= 0 || pos > size+1) {
        printf("Invalip position, cannot insert");
    } else {
        for (i = size-1; i >= pos-1; i--)
        {
            a[i + 1] = a[i];    // so if size = 5, i = 4, given: pos=2, i >= pos-1, i >= 1 {true}, i-- = 3, a[5] = a[4] 
        }
        a[pos-1] = num;
        size++;
    }
    for (i = 0; i < size; i++)
    {
        printf("Element at %d: %d\n", i, a[i]);
    }
    return 0;
}

// 1. inserting at the beginning, at position 1 index 0
// int main()
// {
//     //3. Inserting within the array
//      int a[50], i, size, num, pos;
//     printf("Enter size of array: ");
//     scanf("%d", &size);
//     printf("Enter elements of array: ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter data you want to insert: ");
//     scanf("%d", &num);
//     for (i = size-1; i >= 0; i--)
//     {
//         a[i+1] = a[i];
//     }
//     a[0] = num;
//     size++;
//     for (i = 0; i < size; i++)
//     {
//         printf("Element at %d: %d\n", i, a[i]);
//     }
//     return 0;
// }

// 2. inserting at the end
// int main()
// {
//      int a[50], i, size, num;
//     printf("Enter size of array: ");
//     scanf("%d", &size);
//     printf("Enter elements of array: ");
//     for (i = 0; i < size; i++)
//     {
//         scanf("%d", &a[i]);
//     }
//     printf("Enter data you want to insert: ");
//     scanf("%d", &num);
//     a[size] = num;
//     size++;

//     printf("\nUpdated array:\n");
//     for (i = 0; i < size; i++)
//     {
//         printf("%d ", a[i]);
//     }
//     return 0;
// }

/*
In summary: Complexity:
Insert at beginning => O(n) (because of shifting)
Insert in middle => O(n) (because of shifting)
Insert at end => O(1)
In the worst case, the insertion point could be very close to the beginning, causing almost all elements to shift.

Operation                      Complexity
Access by index                O(1)
Update by index                O(1)
Traverse array                 O(n)
Insert at beginning            O(n)
Insert in middle               O(n)
Insert at end                  O(1)
*/