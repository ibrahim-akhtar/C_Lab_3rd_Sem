// Sorting in ascending and descending order

#include <stdio.h>

void sortAscending(int a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (a[i] > a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}

void sortDescending(int a[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = i + 1; j < size; ++j)
        {
            if (a[i] < a[j])
            {
                int x = a[i];
                a[i] = a[j];
                a[j] = x;
            }
        }
    }
}

int main()
{
    printf("Enter the size of array you want to create: ");
    int size;
    scanf("%d", &size);
    int a[size];
    printf("\nEnter %d elements in array.\n", size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element: ", i + 1);
        scanf("%d", &a[i]);
    }
    while (1)
    {
        printf("\nMENU:\n1. For Ascending Order\n2. For Descending Order\n3. Display all Elements\n4. Exit: ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            sortAscending(a, size);
            printf("The array you entered has been Sorted in Ascending Order\n");
            break;
        }
        case 2:
        {
            sortDescending(a, size);
            printf("The array you entered has been Sorted in Descending Order\n");
            break;
        }
        case 3:
        {
            printf("Displaying Array:\n");
            for (int i = 0; i < size; i++)
            {
                printf("Element present at position %d is %d\n", i + 1, a[i]);
            }
            break;
        }
        case 4:
            return 0;
            break;
        default:
            printf("Invalid Input!!!\n");
            break;
        }
    }
}