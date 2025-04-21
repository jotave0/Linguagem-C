#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char palavra1[13], palavra2[13];
    int cont, letraMaiuscula, letraMinuscula, Numero;

    printf("Digite sua senha: ");
    scanf("%12s", palavra1);  // limita a 12 caracteres pra evitar overflow

    printf("Digite sua senha novamente: ");
    scanf("%12s", palavra2);

    cont = 0;
    Numero = 0;
    letraMaiuscula = 0;
    letraMinuscula = 0;

    if (strcmp(palavra1, palavra2) == 0) {
        if (strlen(palavra1) >= 6) {
            while (cont < strlen(palavra1)) {
                if (isupper(palavra1[cont])) {
                    letraMaiuscula++;
                } else if (islower(palavra1[cont])) {
                    letraMinuscula++;
                } else if (isdigit(palavra1[cont])) {
                    Numero++;
                }
                cont++;
            }

            if (letraMaiuscula >= 1 && letraMinuscula >= 1 && Numero >= 1) {
                printf("Nova senha ok\n");
            } else {
                printf("Nova senha invalida\n");
            }
        } else {
            printf("Nova senha invalida\n");
        }
    } else {
        printf("Nova senha invalida\n");
    }

    return 0;
}