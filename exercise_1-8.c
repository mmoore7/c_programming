#include <stdio.h>

/* Count blanks, tabs, and newlines */
int main()
{
    int blanks, tabs, newlines, c;

    blanks, tabs, newlines = 0;

    while ((c = getchar()) != EOF){
        if (c == ' '){
            ++blanks;
        } else if (c == '\t'){
            ++tabs;
        } else if (c == '\n'){
            ++newlines;
        }
    }
    printf("Blanks: %d\n", blanks);
    printf("Tabs: %d\n", tabs);
    printf("Newlines: %d\n", newlines);
    return 0;
}