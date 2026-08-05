//  cobrir-a-parede-de-fotos
//
//  Created by Heitor Moreira on 04/08/26.
//

#include <stdio.h>

int main (void)
{
    float area_foto = 0.4;
    float largura_parede = 0.0;
    float comprimento_parede = 0.0;
    printf("Insira a largura da sua parede: ");
    scanf("%f", &largura_parede);
    printf("Insira o comprimento da parede: ");
    scanf("%f", &comprimento_parede);
    float area_parede = largura_parede * comprimento_parede;
    float qtd_fotos = area_parede / area_foto;
    printf("A quantidade de fotos que você precisa é de: %2.f\n", qtd_fotos);
    return 0;
}

