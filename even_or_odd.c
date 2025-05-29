#include <stdio.h>

int main() {
    int num;

    printf("Enter an integer: ");       // en anglais
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d is even.\n", num);   // "even" = pair
    } else {
        printf("%d is odd.\n", num);    // "odd" = impair
    }

    return 0;
}

