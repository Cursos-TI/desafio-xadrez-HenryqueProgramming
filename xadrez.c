#include <stdio.h>

/*

Desafio - Tema 3

Movimentação das peças de xadrez

1. Torre - While
2. Bispo - Do-While
3. Rainha - For
4. Cavalo - Aninhado

*/

int main() {

    // Torre - While

    int torre = 1;

    printf("Movimentação da torre: \n\n");

    while (torre <= 5){
        printf("Direita\n");
        torre++;
    }
 
    return 0;
}
