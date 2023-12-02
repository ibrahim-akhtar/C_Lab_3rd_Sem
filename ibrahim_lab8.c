// replace substring
#include <stdio.h>
#include <string.h>
int main()
{
    char str[256], substr[128], replace[128], output[256];
    printf("Enter the string: ");
    scanf("%s", &str);
    printf("Enter the substring: ");
    scanf("%s", &substr);
    printf("Enter the string you want substring to get replaced with: ");
    scanf("%s", &replace);
    int i = 0, j = 0, flag = 0, start = 0;
    str[strlen(str)] = '\0';
    substr[strlen(substr)] = '\0';
    replace[strlen(replace)] = '\0';
    while (str[i] != '\0') // checking whether the substring to be replaced is present
    {
        if (str[i] == substr[j])
        {
            if (!flag)
                start = i;
            j++;
            if (substr[j] == '\0')
                break;
            flag = 1;
        }
        else
        {
            flag = start = j = 0;
        }
        i++;
    }
    if (substr[j] == '\0' && flag)
    {
        for (i = 0; i < start; i++)
            output[i] = str[i];

        for (j = 0; j < strlen(replace); j++) // replace substring with another string
        {
            output[i] = replace[j];
            i++;
        }

        for (j = start + strlen(substr); j < strlen(str); j++) // copying remaining portion of the input string
        {
            output[i] = str[j];
            i++;
        }

        output[i] = '\0';
        printf("Output: %s\n", output);
    }
    else
    {
        printf("%s is not a substring of %s\n", substr, str);
    }
    return 0;
}