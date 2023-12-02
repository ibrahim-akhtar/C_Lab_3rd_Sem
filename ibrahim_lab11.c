//sum and standard deviation of array
#include <stdio.h>
float sum(float *a, int n)
{
    float s = 0;
    for (int i = 0; i < n; i++)
        s = s + a[i];
    return s;
}
float deviation(float t, int n)
{
    return t / n;
}
int main()
{
    int n;
    printf("Enter the amount of total numbers you want the sum of: ");
    scanf("%d", &n);
    float a[n];
    for (int i = 0; i < n; i++)
    {
        printf("Enter the %dth element: ", i + 1);
        scanf("%f", &a[i]);
    }
    float t = sum(a, n);
    printf("Sum of Numbers: %.3f\n", t);
    float x = deviation(t, n);
    printf("Standard Deviation: %.3f\n", x);
}