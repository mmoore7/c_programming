#include <stdio.h>

/* print each word from input in separate lines */
int main()
{
    #define PREV 0
    #define NEW  1

    int c, state;
    state = NEW;
    while((c = getchar()) != EOF) {
        if (state == PREV && (c == ' ' || c == '\t')) {
            ;
        } else if (c == ' ' || c == '\t') {
            putchar('\n');
            state = PREV;
        } else {
            putchar(c);
            state = NEW;
        }
    }
    return 0;
}