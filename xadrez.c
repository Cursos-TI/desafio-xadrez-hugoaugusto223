#include <stdio.h>

int main() {
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    printf("Movimento da Torre (5 casas para a direita):\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    printf("Movimento do Bispo (5 casas diagonal para cima e direita):\n");
    int casas_bispo_movidas = 0;
    while (casas_bispo_movidas < casas_bispo) {
        printf("Cima, Direita\n");
        casas_bispo_movidas++;
    }
    printf("\n");

    printf("Movimento da Rainha (8 casas para a esquerda):\n");
    int casas_rainha_movidas = 0;
    do {
        printf("Esquerda\n");
        casas_rainha_movidas++;
    } while (casas_rainha_movidas < casas_rainha);

    return 0;
}
