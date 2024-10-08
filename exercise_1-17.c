#include <stdio.h>
#define MAXLINE 1000 /* maximum length seen so far */
#define THRESHOLD 80

/* Write a program to print all lines that are longer than 80 characters */

int fgetline(char line[], int maxline);
void copy(char to[], char from[]);

/* print longest input line */
int main()
{
    int len;    /* current line length */
    int max;    /* maximum length seen so far */
    char line[MAXLINE];     /* current input line */
    char longest[MAXLINE];  /* longest line saved here*/

    max = 0;
    while ((len = fgetline(line, MAXLINE)) > 0)
        if (len > THRESHOLD) {
            copy(longest, line);
            printf(">%d: %s", THRESHOLD, longest);
            printf("Length: %d\n", len);
        }
    return 0;
}

/* getline: read a line into s, return length */
int fgetline(char s[], int lim)
{
    int c, i;

    for (i=0; i<lim-1 && (c=getchar())!=EOF && c!='\n'; ++i)
        s[i] = c;
    if (c == '\n') {
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;

    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}