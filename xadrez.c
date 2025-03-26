#include <stdio.h>

int main() {
    // Movimentação da Torre
    printf("Movimentação da Torre:\n");
    for (int i = 0; i < 5; i++) {
        printf("Direita\n");
    }

    // Movimentação do Bispo
    printf("\nMovimentação do Bispo:\n");
    for (int i = 0; i < 5; i++) {
        printf("Diagonal Superior Direita\n");
    }

    // Movimentação da Rainha
    printf("\nMovimentação da Rainha:\n");
    for (int i = 0; i < 8; i++) {
        printf("Esquerda\n");
    }

    return 0;
}