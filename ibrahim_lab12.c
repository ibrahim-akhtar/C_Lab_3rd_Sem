//difference in dates

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int diffdays (int d1, int d2, int m1, int m2)
{
    int days = 0;
    int md[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (m1 > m2)
    {
        days = days + md[m2 - 1] - d2;
        for (int i = m2; i<m1-1; i++)
        {
            days = days + md[i];
        }
        days = days + d1;
    }
    else if (m2 > m1)
    {
        days = days + md[m1 - 1] - d1;
        for (int i = m1; i<m2-1; i++)
        {
            days = days + md[i];
        }
        days = days + d2;
    }
    else if (m1 == m2)
    {
        days = abs(d1 - d2);
    }
    return days;
}

int main()
{
    char date1[20];
    char date2[20];
    printf("Enter 1st date in DD-MM-YYYY format : ");
    scanf("%s", &date1);
    printf("Enter 2nd date in DD-MM-YYYY format : ");
    scanf("%s", &date2);

    int i = 0, count = 0;
    int d1 = 0, d2 = 0, m1 = 0, m2 = 0, y1 = 0, y2 = 0;

    while (date1[i] != '\0' && date2[i] != '\0')
    {
        if (date1[i] == '-')
        {
            count++;
            i++;
        }
        if (count == 0)
        {
            d1 = (d1 * 10) + (date1[i] - '0');
            d2 = (d2 * 10) + (date2[i] - '0');
            i++;
        }
        else if (count == 1)
        {
            m1 = (m1 * 10) + (date1[i] - '0');
            m2 = (m2 * 10) + (date2[i] - '0');
            i++;
        }
        else if (count == 2)
        {
            y1 = (y1 * 10) + (date1[i] - '0');
            y2 = (y2 * 10) + (date2[i] - '0');
            i++;
        }
    }

    //printf("%d & %d & %d\n", d1, m1, y1);
    //printf("%d & %d & %d\n", d2, m2, y2);

    int ydiff = abs(y1 - y2);
    int diffd = diffdays(d1, d2, m1, m2);

    int totaldays = ydiff*365 + diffd;
    printf("\nDifference b/w 2 Dates: %d\n", totaldays);

    return 0;
}