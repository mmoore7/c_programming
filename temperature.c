# include <stdio.h>

/* print Fahrenheit-Celsius table */
int main()
{
    float fahr, celsius;
    int lower, upper, step;

    lower = 0; /* Lower limit of temperature table */
    upper = 300; /* upper limit */
    step = 20; /* step size */

    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0/9.0) * (fahr-32);
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
    return 0;
}