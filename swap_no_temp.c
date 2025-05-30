#include <stdio.h>

int main() {
    int a, b;

    scanf("%d %d", &a, &b);

    // Échange des valeurs sans variable temporaire
    a = a + b;  // a devient 15
    b = a - b;  // b devient 5 (valeur initiale de a)
    a = a - b;  // a devient 10 (valeur initiale de b)

    printf("Après échange: a = %d, b = %d\n", a, b);  

    return 0;
}
