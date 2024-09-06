#include <stdio.h>

/* histogram of frequencies of different characters in its input */
int main()
{
    int c, i, j;
    int ndigit[150];

    for (i = 0; i < 150; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF && (c != '\n')) {
        ++ndigit[c];
    }
    for (i = 0; i < 150; ++i) {
        if (ndigit[i] > 0){
            printf("%c ", i);
            for (j = 0; j < ndigit[i]; ++j)
                printf(">");
            printf("\n");
        }
        
    }
    printf("\n");
    return 0;
}