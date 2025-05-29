#include <stdio.h>

int main() {
    int nombre1, nombre2, somme;

    // Demander à l'utilisateur d'entrer deux entiers
    printf("Entrez deux entiers : ");
    scanf("%d %d", &nombre1, &nombre2);

    // Calculer la somme
    somme = nombre1 + nombre2;

    // Affiche la somme
    printf("La somme de %d et %d est %d\n", nombre1, nombre2, somme);

    return 0;
}