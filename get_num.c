#include <stdio.h>

int main(){
    int c;

    c = getchar();
    
    printf("Input: %d\n", c);
    printf("Actual number: %d\n", (c-'0'));
    return 0;
}