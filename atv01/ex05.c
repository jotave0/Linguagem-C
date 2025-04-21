#include <stdio.h>

int main (){

int lista[10];
int ordenado = 1;
int temp, i, j;
int trocas = 0;


printf("Digite 10 valores inteiros: \n");
for (i = 0; i < 10; i++)
{
    scanf("%i", &lista[i]);
}

for (i = 0; i < 9 ; i++){
    if (lista[i] > lista[i + 1]){
        ordenado = 0;
        break;
    }
}

if (ordenado == 1 ) {
    printf("Vetor ja ordenado");
} else {
    for(i = 0; i < 9; i++){
        for(j = 0; j < 9 - i; j++){
            if (lista[j] > lista[j + 1]) { 
                temp = lista[j];
                lista[j] = lista[j + 1];
                lista[j + 1] = temp;
                trocas++;
            }
        }
    }
    printf("Vetor ordenado: ");
        for (i = 0; i < 10; i++) {
            printf("%d ", lista[i]);
        }
 printf("\nTotal de trocas: %d\n", trocas);
    }
    return 0;
}



