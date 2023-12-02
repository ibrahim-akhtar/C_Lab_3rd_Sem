// largest contiguous subarray

#include <stdio.h>

int main()
{
    int size, m = 0, l = 0;
    printf("Enter the size of the array\n");
    scanf("%d", &size);
    int array[size];
    printf("Enter the Elements of the array\n");

    for (int i = 0; i < size; i++)
    {
        scanf("%d", &array[i]);
    }
    int max = array[0];
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = i; j < size; j++)
        {
            sum = sum + array[j];
            if (sum > max)
            {
                m = i;
                l = j;
                max = sum;
            }
        }
    }
    printf("\nThe length of  max contigous subarray is %d\nElements are: ", l - m + 1);
    for (int i = m; i<= l; i++)
    {
        printf("%d\t", array[i]);
    }
    printf("\nThe sum of the max contigous subarray is %d\n", max);
    return 0;
}