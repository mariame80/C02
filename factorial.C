#include <stdio.h>

int main() {
  int number, i;
  long int factorial = 1; // Using long int to handle large factorials

  printf("Enter an integer: ");
  scanf("%d", &number);

  if (number < 0) {
    printf("Factorial is not defined for negative numbers.\n");
  } else {
    // Calculate the factorial
    for (i = 1; i <= number; i++) {
      factorial *= i;
    }

    printf("The factorial of %d is: %ld\n", number, factorial);
  }

  return 0;
}
