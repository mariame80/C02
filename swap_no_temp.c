#include<stdio.h>
int main()
{
    int nb1,nb2;
    scanf("%d %d", &nb1, &nb2);
    nb1= nb1 + nb2;
    nb2= nb1 - nb2;
    nb1= nb1 - nb2;
    printf("Après échange : a = %d, b = %d\n", nb1, nb2);
    return 0;
}
