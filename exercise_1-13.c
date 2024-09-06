#include <stdio.h>

#define IN  1 // inside word
#define OUT 0 // outside word

/* Draw histogram of length of words */
int main()
{
    int c, i, j, cc, state;
    int ndigit[10];
    cc = 0;
    state = OUT;

    for (i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }
        
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
            ++ndigit[cc];
            cc = 0;
        } else if (state == OUT) {
            state = IN;
            ++cc;
        } else {
            ++cc;
        }
    }

    for (i = 0; i < 10; ++i) {
        printf("%d ", i);
        for (j = 0; j < ndigit[i]; ++j) {
            printf(">");
        }
        printf("\n");
    }
    return 0;
}