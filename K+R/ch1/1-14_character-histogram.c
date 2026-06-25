#include <stdio.h>

#define MAX_CHARS 256

/* produce a histogram of the characters used in the input */
int main(void) {
  /* use unsigned char types for safe array indexing */
  unsigned char character_count[MAX_CHARS];
  unsigned char c;
  int i, j;

  for (i = 0; i < MAX_CHARS; i++) {
    character_count[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == '\n') {
      /* print out histogram */
      printf("Character Count Histogram:\n");
      for (i = 0; i < MAX_CHARS; i++) {
        if (character_count[i] != 0) {
          printf("%c\t", i);
          for (j = 0; j < character_count[i]; j++) {
            printf("🟪");
          }
          printf("\n");
        }
      }

      /* clear array for next input */
      for (i = 0; i < MAX_CHARS; i++) {
        character_count[i] = 0;
      }
    } else {
      character_count[c]++;
    }
  }

  return 0;
}
