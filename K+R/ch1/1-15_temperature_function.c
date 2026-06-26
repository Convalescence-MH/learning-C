#include <stdio.h>

/* convert: return Fahrenheit equivalent of given Celcius temperature */
float convert_to_F(float temp) {
  return ((9.0/5.0) * temp) + 32.0; 
}

/* print a table of celsius to Fahrenheit conversions */
int main() {
  int lower = -20; /* lower limit of the table */
  int upper = 50; /* upper limit of the table */
  int step = 5; /* step value between lines */

  printf("%3c %6c\n", 'C', 'F');
  float celsius = lower;
  while (celsius <= upper) {
    printf("%3.0f %6.1f\n", celsius, convert_to_F(celsius));
    celsius += step;
  }

  return 0;
}
