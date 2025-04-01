#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    int b = 0;
    while (b < 5) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);
    printf("\n");

    // Movimento do Cavalo (usando loops aninhados)
    printf("Movimento do Cavalo:\n");
    int i;
    for (i = 0; i < 2; i++) { // Move 2 casas para baixo
        printf("Baixo\n");
    }
    int j = 0;
    while (j < 1) { // Move 1 casa para a esquerda
        printf("Esquerda\n");
        j++;
    }

    return 0;
}
