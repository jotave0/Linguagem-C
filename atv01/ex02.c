#include <stdio.h>
#include <math.h>

struct coordenada {
    float x;
    float y;
};

int main() {
    struct coordenada ponto1, ponto2;
    float distancia;

    while (1) {
        printf("Digite a coordenada x e y do ponto 1: ");
        scanf("%f %f", &ponto1.x, ponto1.y);
        printf("Digite a coordenada x e y do ponto 2: ");
        scanf("%f %f", &ponto2.x, ponto2.y);

        if (ponto1.x == 0 && ponto1.y == 0 && ponto2.x == 0 && ponto2.y == 0) {
            printf("Encerrando...\n");
            break;
        }

        distancia = sqrt(pow(ponto2.x - ponto1.x, 2) + pow(ponto2.y - ponto1.y, 2));
        printf("Distância entre os pontos: %.4f\n\n", distancia);
    }

    return 0;
}