#include <stdio.h>

/* copy input to output and remove blanks */
int main()
{
    int c;

    c = getchar();
    while (c != EOF) {
        if (c == ' '){
            ;
        } else {
            putchar(c);
        }
        c = getchar();
    }
    return 0;
}