#include <stdio.h>

int main()
{
    long nc = 0;
    int c;

    printf("Enter some text (press Ctrl+D on Unix or Ctrl+Z on Windows to end):\n");

    while ((c = getchar()) != EOF) 
        ++nc;
        // Print the current count after each newline
    printf("%ld\n", nc);
    return 0;
}