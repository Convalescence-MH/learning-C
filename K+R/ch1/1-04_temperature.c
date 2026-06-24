#include <stdio.h>

/* print a conversion table for Celsius to Fahrenheit */
int main() {
    float fahr, celsius;

    int lower = -20; /* lower limit of the table */
    int upper = 50; /* upper limit of the table */
    int step = 5; /* step value between lines */
    
    printf("%3c %6c\n", 'C', 'F');
    celsius = lower;
    while (celsius <= upper) {
        fahr = ((9.0/5.0) * celsius) + 32.0;
        printf("%3.0f %6.1f\n", celsius, fahr);
        celsius += step;
    }
    return 0;
}
