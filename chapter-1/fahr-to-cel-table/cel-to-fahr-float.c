#include <stdio.h>

// This program uses the formula `F = C * (9.0 / 5.0) + 32` to print a table
// of converted Celsius to Fahrenheit temperature equivalents

// FLOATING-POINT VERSION

int main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0;   // lower limit of temperature scale
  upper = 300; // upper limit of temperature scale
  step = 20;   // step size

  celsius = lower;

  printf("CELSIUS -> FAHRENHEIT TABLE\n");
  while (celsius <= upper) {
    fahr = celsius * (9.0 / 5.0) + 32;
    printf("%3.0f -> %6.0f\n", celsius, fahr);
    /* `printf` is a general-purpose output formatting function.
     * It takes arguments prefixing `%` to format output according to
     * its correspondent type.
     * printf also recognizes %o (for octal), %x (for hexadecimal)
     * %c (for character), %s (for character string) and %% for itself*/
    celsius = celsius + step;
  }
}
