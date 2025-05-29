#include <stdio.h>

int main() {
    int number1, number2, sum;

    // Ask the user to enter two integers
    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // Calculate the sum
    sum = number1 + number2;

    // Display the sum
    printf("The sum of %d and %d is %d\n", number1, number2, sum);

    return 0;
}
