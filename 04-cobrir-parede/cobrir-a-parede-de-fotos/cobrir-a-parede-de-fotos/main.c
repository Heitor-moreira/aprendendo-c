//  cobrir-a-parede-de-fotos
//
//  Created by Heitor Moreira on 04/08/26.
//

#include <stdio.h>

int main (void)
{
    int largura_foto = 0.5;
    int comprimento_foto  = 0.8;
    int area_foto = largura_foto * comprimento_foto;
    float largura_parede = 0.0;
    float comprimento_parede = 0.0;
    printf("Insira a largura da sua parede: \n");
    scanf("%f.2", &largura_parede);
    printf("Insira o comprimento da parede: \n");
    scanf("%f.2", &comprimento_parede);
    float area_parede = largura_parede * comprimento_parede;
    float qtd_fotos = area_parede / area_foto;
    printf("A quantidade de fotos que você precisa é de: %f.2\n", qtd_fotos);
    return 0;
}
