
#include <stdio.h>

int main() {
  int nombre, i;
  long int factorielle = 1; // Déclaration et initialisation
  
  scanf("%d", &nombre);

  if (nombre < 0) {
    printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
  } else {
    // Calcul de la factorielle
    for (i = 1; i <= nombre; i++) {
      factorielle *= i;
    }

    printf("La factorielle de %d est : %ld\n", nombre, factorielle);
  }

  return 0;
}
