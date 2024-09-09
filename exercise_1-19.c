#include <stdio.h>

#define MAXLINE 1000

/* Print input backwards per line */
int fgetline(char line[], int maxline);
int main()
{
    int len;
    int i;
    char line[MAXLINE];
    while ((len = fgetline(line, MAXLINE)) > 0 ) {
        for (i=len; i>=0; --i) {
            if (line[i]=='\n') {
                ;
            } else {
                putchar(line[i]);
            }
        }
        printf("\n");
    }
    
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