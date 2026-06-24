#include <stdio.h>

/* Copy input to output, replace multiple blanks with a single one */
int main() {
    char c;
    int nb = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            nb++;
        } else if (nb > 0) {
            printf(" %c", c);
            nb = 0;
        } else {
            printf("%c", c);
        }
    }

    return 0;
}