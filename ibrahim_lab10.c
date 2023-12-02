//complex no. using structure
#include <stdio.h>
#include <stdlib.h>

struct Complex
{
    int r;
    int im;
} num1, num2;

int main()
{
    int t;

    printf("Enter the REAL part of 1st Number: ");
    scanf("%d", &num1.r);
    printf("Enter the IMAGINARY part of 1st Number: ");
    scanf("%d", &num1.im);
    printf("1st Complex No.: %d + %di\n", num1.r, num1.im);

    printf("Enter the REAL part of 2nd Number: ");
    scanf("%d", &num2.r);
    printf("Enter the IMAGINARY part of 2nd Number: ");
    scanf("%d", &num2.im);
    printf("2nd Complex No.: %d + %di\n", num2.r, num2.im);

    printf("\nAfter Addition: %d + %di\n", num1.r + num2.r, num1.im + num2.im);
    printf("\nMultiplication: %d + %di\n", (num1.r * num2.r) - (num1.im * num2.im), (num1.r * num2.im) + (num1.im + num2.r));
}