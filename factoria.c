#include <stdio.h> // <-- Ajoutez cette ligne !

int main() {
    int nombre;
    int i;
    long long factorial = 1; // Utilisez 'long long' pour de plus grands nombres

    printf("Entrez un entier positif : ");
    scanf("%d", &nombre);

    // Vérifie si le nombre est négatif
    if (nombre < 0) {
        printf("Veuillez choisir un nombre positif !\n");
    } else {
        for (i = 1; i <= nombre; ++i) {
            factorial *= i;
        }
        printf("La factorial de %d est %lld\n", nombre, factorial);
    }

    return 0;
}