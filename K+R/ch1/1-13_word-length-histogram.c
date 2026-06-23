#include <stdio.h>

#define MAX_LENGTH 50

/* macros to denote being inside or outside of a word */
#define IN 1
#define OUT 0

/* print histogram of word lengths in the input */
int main() {
    char c;
    int word_lengths[MAX_LENGTH];
    int status = OUT;
    int length = 0;

    /* initialize array of word lengths: 
        the nth element of the array is the number of words of length n */
    int i;
    for (i = 0; i < MAX_LENGTH; ++i) {
        word_lengths[i] = 0;    
    }

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            /* account for the last word before the newline */
            word_lengths[length]++;
            status = OUT;

            printf("Word-length histogram:\n");
            for (i = 0; i < MAX_LENGTH; i++) {
                if (word_lengths[i] != 0) {
                    printf("%d\t", i);

                    int j;
                    for (j = 0; j < word_lengths[i]; ++j) {
                        printf("🟧");
                    }
                    printf("\n");
                }
            }
            
            /* clear histogram of previous results */
            int i;
            for (i = 0; i < MAX_LENGTH; ++i) {
                word_lengths[i] = 0;    
            }

            /* reset word length */
            length = 0;
        } else if (status == OUT && (c != ' ' && c != '\t' && c != '\n')) {
            status = IN;
            length = 1;
        } else if (status == IN && (c != ' ' && c != '\t' && c != '\n')) {
            length++;
        } else if (status == IN && (c == ' ' || c == '\t')) {
            word_lengths[length]++;
            status = OUT;        
        } else
            puts("Unexpected condition!");
    }

    return 0;
}