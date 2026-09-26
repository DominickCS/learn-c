#include <stdio.h>

// This program uses the formula `C = (5/9) (F - 32)` to print a table
// of converted Fahrenheit to Celsius temperature equivalents

// FLOATING-POINT VERSION

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;   // lower limit of temperature scale
  upper = 300; // upper limit of temperature scale
  step = 20;   // step size

  fahr = lower;

  printf("FAHRENHEIT -> CELSIUS TABLE\n");
  while (fahr <= upper) {
    celsius = (5.0 / 9.0) * (fahr - 32.0);
    printf("%3.0f -> %6.1f\n", fahr, celsius);
    /* `printf` is a general-purpose output formatting function.
     * It takes arguments prefixing `%` to format output according to
     * its correspondent type.
     * printf also recognizes %o (for octal), %x (for hexadecimal)
     * %c (for character), %s (for character string) and %% for itself*/
    fahr = fahr + step;
  }
}
