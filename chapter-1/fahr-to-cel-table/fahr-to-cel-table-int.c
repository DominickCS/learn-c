#include <stdio.h>

// This program uses the formula `C = (5/9) (F - 32)` to print a table
// of converted Fahrenheit to Celsius temperature equivalents

// INTEGER VERSION

int main() {
  int fahr, celsius;
  int lower, upper, step;

  lower = 0;   // lower limit of temperature scale
  upper = 300; // upper limit of temperature scale
  step = 20;   // step size

  fahr = lower;
  while (fahr <= upper) {
    celsius = 5 * (fahr - 32) / 9;
    /* Integer division truncates, or discards any fractional part
     * This is why we modified the formula to operate as such. */
    printf("%3d %6d\n", fahr, celsius);
    /* `printf` is a general-purpose output formatting function.
     * It takes arguments prefixing `%` to format output according to
     * its correspondent type. */
    fahr = fahr + step;
  }
}
