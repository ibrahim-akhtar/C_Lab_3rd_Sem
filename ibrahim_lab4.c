//Decimal to Octal & Octal to Decimal Conversion

#include<stdio.h>
#include <stdlib.h>
#include <string.h>

char *decimalToOctal(int decimal)
{
    char *octal = (char *)malloc(23);
    if (octal == NULL)
    {
        printf("Clear Memory!!!\n");
        return 0;
    }
    octal = octal + 22;
    *octal-- = '\0';
    if (decimal == 0)
        *octal = '0';
    else
    {
        char remainder;
        while (decimal > 0)
        {
            remainder = (decimal % 8) + '0';
            *octal-- = remainder;
            decimal = decimal / 8;
        }
        octal++;
    }
    return octal;
}

int octToDecimal(char *oct, int length)
{
    int decimal = 0;
    int x = 1;
    oct = oct + length - 1;
    for (int i = 0; i < length; i++, oct--)
    {
        int coefficient = *oct - '0';
        decimal = decimal + (x * coefficient);
        x = x * 8;
    }

    return decimal;
}

int main()
{
    while (1)
    {
        printf("\nMENU:\n1. Decimal to Octal\n2. Octal to Decimal\n3. Exit: ");
        int choice;
        scanf("%d", &choice);

        switch (choice)
        {
            case 1:
            {
            int decimal;
            char *octal;
            printf("Enter the Decimal Number you want to convert: ");
            scanf("%d", &decimal);
            octal = decimalToOctal(decimal);
            printf("%d in Decimal equals %s in Octal\n", decimal, octal);
            break;
        }
        case 2:
        {
            char oct[23];
            int length;
            int decimal;
            printf("Enter the Octal Number you want to convert: ");
            scanf("\n%22s", oct);
            length = strlen(oct);
            decimal = octToDecimal(oct, length);
            printf("%s in Octal is %d in Decimal\n", oct, decimal);
            break;
        }
        case 3:
            return 0;
            break;
        default:
            printf("Invalid Input!!!\n");
            break;
        }
    }
    return 0;
}