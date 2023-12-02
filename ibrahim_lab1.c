// Binary & Linear Search

#include <stdio.h>

int linearSearch(int array[], int n, int x) // Linear Search
{
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int binarySearch(int array[], int n, int x) // Binary Search
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (array[mid] == x)
            return mid;
        if (array[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
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
        printf("\nMENU:\n1. For Linear Searching\n2. For Binary Searching\n3. Display all Elements\n4. Exit: ");
        int choice;
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter the number you want to search: ");
            int num;
            scanf("%d", &num);
            int index = linearSearch(a, size, num);
            if (index == -1)
                printf("Number %d you Searched was not found in the array!!!\n", num);
            else
                printf("Number %d you Searched was found in the array at index %d\n", num, index + 1);
            break;
        }
        case 2:
        {
            printf("Enter the number you want to search: ");
            int num;
            scanf("%d", &num);
            int index = binarySearch(a, size, num);
            if (index == -1)
                printf("Number %d you Searched was not found in the array!!!\n", num);
            else
                printf("Number %d you Searched was found in the array at index %d\n", num, index + 1);
            break;
        }
        case 3:
        {
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
            printf("Wrong Input\n");
            break;
        }
    }
    return 0;
}