#include <stdio.h>

/* macros for denoting being inside or outside a word */
#define IN 1
#define OUT 0

/* print input one word per line */
int main() {
    char c;
    int status = OUT;

    while ((c = getchar()) != EOF) {
        if (status == OUT && (c != ' ' || c != '\n' || c != '\t')) {
            status = IN;
            printf("%c", c);
        } else if (c == ' ' || c == '\n' || c == '\t') {
            status = OUT;
            printf("\n");
        } else {
            printf("%c", c);
        }
    }
    
    return 0;
}