#include <stdio.h>

/* Function for temperature conversion fahrenheight => celsius */
/* Conversion formula: (5/9) * (fahrenheit - 32) */

#define LOWER   0
#define STEP    20
#define UPPER   300


float convert_f_to_c(float fahr);

int main()
{
    float fahr;
    for (fahr = LOWER; fahr < UPPER; fahr = fahr + STEP){
        printf("%.1f\t %.2f\n", fahr, convert_f_to_c(fahr));
    }
    return 0;
}

float convert_f_to_c(float fahr)
{   
    float cel;
    cel = (5.0/9.0) * (fahr - 32);
    return cel;
}
