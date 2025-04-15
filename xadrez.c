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

    printf("\nMovimentação da torre: \n\n");

    while (torre <= 5){
        printf("Direita\n");
        torre++;
    }

    // Bispo - Do-While

    int bispo = 1;

    printf("\nMovimentação do bispo: \n\n");

    do{
        printf("Cima, direita\n");
        bispo++;

    } while (bispo <= 5);

    // Rainha - For

    printf("\nMovimentação da rainha: \n\n");

    for (int rainha = 1; rainha <= 8; rainha++){
        printf("Esquerda\n");
    }

    // Cavalo - Aninhado

    int cavalo = 1;

    printf("\nMovimentação do cavalo: \n\n");

    do{
        for(int i = 0; i < 2; i++){
            printf("Cima!\n");
        }
        printf("Direita!\n");
        cavalo++;
    } while (cavalo <= 1);
 
    return 0;
}

