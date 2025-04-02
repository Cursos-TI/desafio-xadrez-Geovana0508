#include <stdio.h>

// Função recursiva para movimentação da Torre
void moverTorre(int casas) {
    if (casas == 0) return; // Caso base: se não houver mais casas para mover, retorna
    printf("Direita\n"); // Imprime a direção do movimento
    moverTorre(casas - 1); // Chamada recursiva para mover a próxima casa
}

// Função recursiva para movimentação do Bispo
void moverBispo(int casas) {
    if (casas == 0) return; // Caso base: se não houver mais casas para mover, retorna
    printf("Cima, Direita\n"); // Imprime a direção do movimento
    moverBispo(casas - 1); // Chamada recursiva para mover a próxima casa
}

// Função recursiva para movimentação da Rainha
void moverRainha(int casas) {
    if (casas == 0) return; // Caso base: se não houver mais casas para mover, retorna
    printf("Esquerda\n"); // Imprime a direção do movimento
    moverRainha(casas - 1); // Chamada recursiva para mover a próxima casa
}

// Movimento do Cavalo usando loops aninhados
void moverCavalo(int movimentos) {
    for (int i = 0; i < movimentos; i++) { // Loop externo para cada movimento do Cavalo
        int passosVerticais = 2; // O cavalo se move 2 casas para cima
        int passosHorizontais = 1; // O cavalo se move 1 casa para a direita
        
        for (int j = 0; j < passosVerticais; j++) { // Loop para mover para cima
            printf("Cima\n"); // Imprime a direção do movimento
        }
        
        for (int k = 0; k < passosHorizontais; k++) { // Loop para mover para a direita
            printf("Direita\n"); // Imprime a direção do movimento
        }
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n"); // Indica o início do movimento da Torre
    moverTorre(5); // Chama a função recursiva para mover a Torre 5 casas
    printf("\n"); // Linha em branco para separar a saída

    // Movimento do Bispo
    printf("Movimento do Bispo:\n"); // Indica o início do movimento do Bispo
    moverBispo(5); // Chama a função recursiva para mover o Bispo 5 casas
    printf("\n"); // Linha em branco para separar a saída

    // Movimento da Rainha
    printf("Movimento da Rainha:\n"); // Indica o início do movimento da Rainha
    moverRainha(8); // Chama a função recursiva para mover a Rainha 8 casas
    printf("\n"); // Linha em branco para separar a saída

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n"); // Indica o início do movimento do Cavalo
    moverCavalo(1); // Chama a função para mover o Cavalo uma vez
    printf("\n"); // Linha em branco para separar a saída
    
    return 0;
}
