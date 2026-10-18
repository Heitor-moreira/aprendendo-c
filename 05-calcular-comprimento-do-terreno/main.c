#include <stdio.h>

int main(void) {
    int terreno_largura = 20;
    int terreno_comprimento = 800;
    int terreno_area_total = terreno_largura * terreno_comprimento;
    int lote_largura = 20;
    float lote_comprimento = 0.0;
    int lote_quantidade = 0;

    printf("Insira a quantidade de lotes desejadas para o terreno de %d metros quadrados: ", terreno_area_total);
    scanf("%d", &lote_quantidade);
    printf("A quantidade de lotes selecionada foi %d\n", lote_quantidade);
    printf("Calculado o tamanho da frente de cada lote...\n");
    lote_comprimento = terreno_area_total / lote_quantidade;
    printf("A area da frente para %d terrenos e de: %2.f", lote_quantidade, lote_comprimento);
    return 0;
}