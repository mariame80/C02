#include <stdio.h>

int main() {
    int a = 5;
    int b = 10;

    printf("Avant l'échange : a = %d, b = %d\n", a, b);

    // Échange des valeurs sans variable temporaire
    a = a + b;  // a devient 15
    b = a - b;  // b devient 5 (valeur initiale de a)
    a = a - b;  // a devient 10 (valeur initiale de b)

    printf("Après l'échange : a = %d, b = %d\n", a, b);  

    return 0;
}


