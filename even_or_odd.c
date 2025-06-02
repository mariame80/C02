#include <stdio.h>//bibliothéque 

int main() {//fonction principal
    int num;//declaration des nobres 

    scanf("%d", &num);// lecture des variable

    if (num % 2 == 0) {
        printf("%d est pair.\n", num);//le nombre est pair 
    } else {
        printf("%d est impair.\n", num);//le nombre est impaire
    }

    return 0;//retourne a la ligne 
}

