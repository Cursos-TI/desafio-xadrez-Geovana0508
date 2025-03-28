#include <stdio.h>

int main() {
    // Movimento da Torre (usando for)
    printf("Movimento da Torre:\n");
    // A Torre se move em linha reta horizontal ou vertical
    // Neste caso, moverá 5 casas para a direita
    for (int t = 0; t < 5; t++) {
        printf("Direita\n");
    }
    printf("\n");

    // Movimento do Bispo (usando while)
    printf("Movimento do Bispo:\n");
    // O Bispo se move na diagonal
    // Aqui, ele se moverá 5 casas para cima e à direita
    int b = 0;
    while (b < 5) {
        printf("Cima, Direita\n");
        b++;
    }
    printf("\n");

    // Movimento da Rainha (usando do-while)
    printf("Movimento da Rainha:\n");
    // A Rainha pode se mover em todas as direções
    // Neste caso, moverá 8 casas para a esquerda
    int r = 0;
    do {
        printf("Esquerda\n");
        r++;
    } while (r < 8);
    
    return 0;
}
