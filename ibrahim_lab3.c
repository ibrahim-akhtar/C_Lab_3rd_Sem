// matrix

#include <stdio.h>

void add(int row, int col, int a[row][col], int b[row][col])
{
    int c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("After addition, Result Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}

void multiply(int row, int col, int a[row][col], int b[row][col])
{
    int c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            int temp = 0;
            for (int k = 0; k < row; k++)
            {
                temp = temp + (a[i][k] * b[k][j]);
                c[i][j] = temp;
            }
        }
    }
    printf("After multiplication, Result Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}

void transpose(int row, int col, int a[row][col])
{
    int c[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            c[i][j] = a[j][i];
        }
    }
    printf("After transpose, Result Matrix:\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            printf("%d ", c[i][j]);
        printf("\n");
    }
}

int main()
{
    printf("Enter Row Size of 2D Matrix: ");
    int row;
    scanf("%d", &row);
    printf("Enter Column Size of 2D Matrix: ");
    int col;
    scanf("%d", &col);

    int a[row][col], b[row][col];

    printf("For 1st Array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter element of a[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }
    }

    printf("For 2nd Array\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row; j++)
        {
            printf("Enter element of b[%d][%d]: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }
    }

    while (1)
    {
        printf("\nMENU:\n1. Addition\n2. Multiplication\n3. Transpose\n4. Exit: ");
        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
        {
            add(row, col, a, b);
            break;
        }
        case 2:
        {
            multiply(row, col, a, b);
            break;
        }
        case 3:
        {
            printf("Transpose which matrix?\nEnter 1 for 1st Matrix\nEnter 2 for 2nd Matrix: \n");
            int x;
            scanf("%d", &x);
            if (x == 1)
                transpose(row, col, a);
            else if (x == 2)
                transpose(row, col, b);
            else
                printf("Invalid Input, Try Again!!!\n");
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
    return 0;
}