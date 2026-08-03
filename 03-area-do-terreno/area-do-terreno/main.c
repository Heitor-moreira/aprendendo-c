//  area-do-terreno
//
//  Created by Heitor Moreira on 03/08/26.
//

#include <stdio.h>

int main (void)
{
    int comprimento = 8;
    int var = 0;
    printf("Insira a variavel da area: ");
    scanf("%d", &var);
    int largura = (2 * var) + 3;
    int area = comprimento * largura;
    printf("A area do terreno e: %d\n", area);
    return 0;
}
