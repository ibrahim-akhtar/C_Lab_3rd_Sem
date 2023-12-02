// making library functions of string

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
    char str1[20], str2[20];
    int i, j;

    while (1)
    {
        printf("\nMENU\n1:Find Length of String\n2:Find Reverse of String\n3:Copy String\n4:Compare Strings");
        printf("\n5:Concatenate Strings\n6:Check for Palindrome\n7:Find substring\n8:Exit : ");
        int ch;
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("Enter String: ");
            scanf("%s", str1);
            i = strlen(str1);
            printf("Length of String : %d\n", i);
            break;

        case 2:
            printf("Enter String: ");
            scanf("%s", str1);
            strrev(str1);
            printf("Reverse string : %s\n", str1);
            break;

        case 3:
            printf("Enter String1: ");
            scanf("%s", str1);
            printf("Enter String2: ");
            scanf("%s", str2);
            printf("String Before Copying:\nString1=\"%s\" , String2=\"%s\"\n", str1, str2);
            strcpy(str2, str1);
            printf("String After Copying:\nString1=\"%s\" , String2=\"%s\"\n", str1, str2);
            break;

        case 4:
            printf("Enter First String: ");
            scanf("%s", str1);
            printf("Enter Second String: ");
            scanf("%s", str2);
            j = strcmp(str1, str2);
            if (j == 0)
                printf("Strings are Same\n");
            else
                printf("Strings are Not Same\n");
            break;

        case 5:
            printf("\nEnter First String: ");
            scanf("%s", str1);
            printf("Enter Second string: ");
            scanf("%s", str2);
            strcat(str1, str2);
            printf("String After Concatenation : %s\n", str1);
            break;

        case 6:
            printf("Enter String:");
            scanf("%s", &str1);
            int l = 0;
            int h = strlen(str1) - 1;
            int x = 0;
            while (h > l)
            {
                if (str1[l++] != str1[h--])
                {
                    printf("%s is not a palindrome\n", str1);
                    x = 1;
                    break;
                }
            }
            if (x == 0)
                printf("%s is a palindrome\n", str1);
            break;

        case 7:
            printf("Enter First String:");
            scanf("%s", str1);
            printf("Enter Second String:");
            scanf("%s", str2);
            if (strstr(str1, str2) == NULL)
                printf("Second String is Not a Substring of First String\n");
            else
                printf("Second String is a Substring of First String\n");
            break;

        case 8:
            exit(0);
            break;
        default:
            printf("Invalid Input!!!\n");
        }
    }
    return 0;
}