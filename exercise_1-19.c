#include <stdio.h>

#define MAXLINE 1000

int fgetline(char line[], int maxline);

int main()
{
    return 0;
}

int fgetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i) {
        s[i] = c;
    }
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}