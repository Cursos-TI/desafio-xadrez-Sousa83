#include <stdio.h>

int main() {
    // ----------------------
    // Simulação da TORRE
    // ----------------------

    // A torre vai se mover 5 casas para a direita
    int movimentosTorre = 5;

    printf("Movimento da Torre:\n");
    // Usando o loop FOR
    for (int i = 1; i <= movimentosTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    // ----------------------
    // Simulação do BISPO
    // ----------------------

    // O bispo vai se mover 5 casas na diagonal: cima + direita
    int movimentosBispo = 5;
    int contadorBispo = 0;

    printf("Movimento do Bispo:\n");
    // Usando o loop WHILE
    while (contadorBispo < movimentosBispo) {
        printf("Cima Direita\n");
        contadorBispo++;
    }

    printf("\n");

    // ----------------------
    // Simulação da RAINHA
    // ----------------------

    // A rainha vai se mover 8 casas para a esquerda
    int movimentosRainha = 8;
    int contadorRainha = 0;

    printf("Movimento da Rainha:\n");
    // Usando o loop DO-WHILE
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha < movimentosRainha);

    return 0;
}
