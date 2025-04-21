#include <stdio.h>

int main ()
{
    struct coordenada
    {
        float x;
        float y;
    };
    
    int N;
    printf("Digite o numero de testes: ");
    scanf("%i", &N);

    for(int i = 0; i < N ; i++){
        struct coordenada ponto1, ponto2, pontoteste;

        printf("Digite os pontos x e y do ponto 1: ");
        scanf("%f %f",&ponto1.x, &ponto1.y);

        printf("Digite os pontos x e y do ponto 2: ");
        scanf("%f %f", &ponto2.x, &ponto2.y);

        printf("Digite os pontos x e y do ponto de teste: ");
        scanf("%f %f", &pontoteste.x, &pontoteste.y);

        if (pontoteste.x >= ponto1.x && pontoteste.x <= ponto2.x && pontoteste.y >= ponto1.y && pontoteste.y <= ponto2.y){
            printf("Contido \n");
        } else {
            printf("Nao Contido \n");
        }

    }

}