#include <stdio.h>

/* count characters in input; 2nd version */
/* you must input EOF: enter, ctrl + d on Linux, ctrl + z on windows */
int main()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc)
        ;
    printf("%.0f\n", nc);

    return 0;
}