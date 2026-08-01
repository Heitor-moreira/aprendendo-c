//  area-retangulo
//
//  Created by Heitor Moreira on 31/07/26.
//

#include <stdio.h>

int main (void)
{
    float largura = 0.0;
    float comprimento = 0.0;
    printf("Insira a dimensao da LARGURA: ");
    scanf("%f", &largura);
    printf("Insira o valor do COMPRIMENTO: ");
    scanf("%f", &comprimento);
    float resultado = largura * comprimento;
    printf("A area do retangulo e: %.2f\n", resultado);
    return 0;
}
