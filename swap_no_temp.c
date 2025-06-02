#include<stdio.h>//bibliothéque 
int main()//fonctin principal 
{
    int nb1,nb2;//decleration des nombres 
    scanf("%d %d", &nb1, &nb2);//lectur des variable
    nb1= nb1 + nb2;//nb1 contient la somme de deux nombres
    nb2= nb1 - nb2;// nb2 récupére l'ancienne valeur de nb1
    nb1= nb1 - nb2;// nb1récupére l'anciennne valeure de nb2
    printf("Après échange : a = %d, b = %d\n", nb1, nb2);//affisage du resultat
    return 0;
}
