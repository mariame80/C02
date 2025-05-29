#include <stdio.h>

int main() {
    int num;

    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d est pair.\n", num);
    } else {
        printf("%d est impair.\n", num);
    }

    return 0;
}

