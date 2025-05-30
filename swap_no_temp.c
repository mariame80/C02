#include <stdio.h>

int main() { // fonction principale
    int a, b;
    scanf("%d %d", &a, &b);
    
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("Après échange: a = %d, b = %d", a, b);
    return 0;
}