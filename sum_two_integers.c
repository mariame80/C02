#include <stdio.h>//bibliothéque

int main()//foction principal
{
    int number1, number2, Somme; // déclariation de variable

    scanf("%d %d", &number1, &number2); // lecture de mes variables

    // Calculate la Somme
    Somme = number1 + number2;
    // messager d'affisage 
    printf("La somme est : %d\n", Somme);

    return 0;
}