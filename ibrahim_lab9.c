//encoding and decoding

#include <stdio.h>
#include <string.h>

void encode_decode(char *c)
{
    char *s = c;
    int l = strlen(s);

    printf("\nOriginal String: ");
    puts(s);

    char es[l];

    for (int i = 0; i < l; i++)
    {
        if ((int)(s[i]) >= 65 && (int)(s[i]) <= 90)
        {
            if ((int)(s[i]) >= 65 && (int)(s[i]) <= 89)
            {
                es[i] = (char)((int)(s[i] + 1));
            }
            else if ((int)(s[i]) == 90)
            {
                es[i] = (char)(65);
            }
        }
        else if ((int)(s[i]) >= 97 && (int)(s[i]) <= 122)
        {
            if ((int)(s[i]) >= 97 && (int)(s[i]) <= 121)
            {
                es[i] = (char)((int)(s[i] + 1));
            }
            else if ((int)(s[i]) == 122)
            {
                es[i] = (char)(97);
            }
        }
        else if ((int)(s[i]) >= 48 && (int)(s[i]) <= 57)
        {
            if ((int)(s[i]) >= 48 && (int)(s[i]) <= 56)
            {
                es[i] = (char)((int)(s[i] + 1));
            }
            else if ((int)(s[i]) == 57)
            {
                es[i] = (char)(48);
            }
        }
        else
        {
            es[i] = s[i];
        }
    }

    // printf ("%d\n", strlen(es));
    printf("\nEncoded String: ");
    puts(es);

    char ds[l];
    for (int i = 0; i < l; i++)
    {
        if ((int)(es[i]) >= 65 && (int)(es[i]) <= 90)
        {
            if ((int)(es[i]) >= 66 && (int)(es[i]) <= 90)
            {
                ds[i] = (char)((int)(es[i] - 1));
            }
            else if ((int)(es[i]) == 65)
            {
                ds[i] = (char)(90);
            }
        }
        else if ((int)(es[i]) >= 97 && (int)(es[i]) <= 122)
        {
            if ((int)(es[i]) >= 98 && (int)(es[i]) <= 122)
            {
                ds[i] = (char)((int)(es[i] - 1));
            }
            else if ((int)(es[i]) == 97)
            {
                ds[i] = (char)(122);
            }
        }
        else if ((int)(es[i]) >= 48 && (int)(es[i]) <= 57)
        {
            if ((int)(es[i]) >= 49 && (int)(es[i]) <= 57)
            {
                ds[i] = (char)((int)(es[i] - 1));
            }
            else if ((int)(es[i]) == 49)
            {
                ds[i] = (char)(57);
            }
        }
        else
        {
            ds[i] = es[i];
        }
    }

    printf("\nDecoded String: ");
    puts(ds);
}

int main()
{
    char s[100];
    printf("Enter the text you want to encode and decode: ");
    gets(s);

    encode_decode(s);

    return 0;
}