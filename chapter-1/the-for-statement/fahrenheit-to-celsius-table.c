#include <stdio.h>

/* print Fahrenheit-Celsius table */

int main() {
  int fahr;

  /* Exercise 1-5 requires the table to be printed in reverse order
   * This solution satisfies the requirement. */
  for (fahr = 300; fahr >= 0; fahr = fahr - 20)
    printf("%3d %6.1f\n", fahr, (5.0 / 9.0) * (fahr - 32.0));
}
