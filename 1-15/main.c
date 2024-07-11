// Rewrite the temperature conversion program of Section 1.2 to use a function for conversion
#include <stdio.h>

int f_2_c(int);

int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    printf("%3c %6c\n", 'F', 'C');
    printf("%3c %6c\n", '-', '-');

    fahr = lower;
    while (fahr <= upper)
    {
        celsius = f_2_c(fahr);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}

int f_2_c(int f)
{
    return (5.0 / 9.0) * (f - 32.0);
}