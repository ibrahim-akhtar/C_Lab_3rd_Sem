// 2D array (for data of students)

#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("Enter the Number of Students: ");
    int n;
    scanf("%d", &n);
    int M[n][6];

    int i = 0, j = 0;
    printf("Enter the Roll Number of Students\n");
    for (j = 0; i < n; i++)
    {
        scanf("%d", &M[i][j]);
    }
    printf("Enter the Age of Students\n");
    i = 0;
    for (j = 1; i < n; i++)
    {
        scanf("%d", &M[i][j]);
    }
    printf("Enter the marks of Subject 1\n");
    i = 0;
    for (j = 2; i < n; i++)
    {
        scanf("%d", &M[i][j]);
    }
    printf("Enter the marks of Subject 2\n");
    i = 0;
    for (j = 3; i < n; i++)
    {
        scanf("%d", &M[i][j]);
    }
    printf("Enter the marks of Subject 3\n");
    i = 0;
    for (j = 4; i < n; i++)
    {
        scanf("%d", &M[i][j]);
    }
    printf("Enter the marks of Subject 4\n");
    i = 0;
    for (j = 5; i < n; i++)
    {
        scanf("%d", &M[i][j]);
    }
    printf("Roll_no\tAge\tSubject 1\tSubject 2\tSubject 3\tSubject 4\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < 6; j++)
        {
            printf("%d\t", M[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("\n");
    printf("Percantage with Roll Numbers\n");
    for (i = 0; i < n; i++)
    {
        float sum = 0;
        printf("%d - ", M[i][0]);
        for (j = 2; j < 6; j++)
        {
            sum += M[i][j];
        }
        printf("%.3f\n", (sum) / 4);
    }
    printf("\n");
    printf("\n");
    printf("Highest marks in each subject along with Roll Number\n");
    for (j = 2; j < 6; j++)
    {
        int a = 0;
        int max = 0;
        for (i = 0; i < n; i++)
        {
            if (M[i][j] == max)
            {
                if (M[i][1] <= M[a][1])
                {
                    a = i;
                    max = M[i][j];
                }
            }
            if (M[i][j] > max)
            {
                a = i;
                max = M[i][j];
            }
        }
        printf("subject %d-", (j - 1));
        printf(" %d by roll number %d\n", max, M[a][0]);
    }
    printf("\n");
    printf("\n");
    printf("Student with Highest Percentage\n");
    float final = 0;
    int a = 0;
    for (i = 0; i < n; i++)
    {
        float percent = 0;
        for (j = 2; j < 6; j++)
        {
            percent += M[i][j];
        }
        if ((percent / 4) >= final)
        {
            if ((percent / 4) == final)
            {
                if (M[i][1] < M[a][1])
                {
                    a = i;
                    final = (percent / 4);
                }
            }
            else
            {
                final = (percent / 4);
                a = i;
            }
        }
    }
    printf("Highest Percentage is %f by Roll Number %d\n", final, M[a][0]);
    printf("\n");
    printf("\n");
    return 0;
}