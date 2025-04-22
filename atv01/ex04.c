#include <stdio.h>

int main(){

int PecaMes	[3][3];
int GranaPeca [3][2];
int GranaMes [3][2] = {0};

char *meses[3] = {"Janeiro", "Fevereiro", "Marco"};
for (int i = 0; i < 3; i++){
	printf("Digite a producao de pecas P1, P2 e P3 nos mes de %s: ", meses[i]);
	for (int j = 0; j < 3; j++)
		scanf("%i", &PecaMes[i][j]);
		}
for (int i = 0; i < 3; i++){
	printf("Digite o custo e o lucro de cada peca respectivamente: ");
	for (int j = 0; j < 2; j++)
		scanf("%i", &GranaPeca[i][j]);
	}
for (int i = 0; i < 3; i++){
		GranaMes[i][0] = PecaMes[i][0] * GranaPeca[0][0] + PecaMes[i][1] * GranaPeca[1][0] + PecaMes[i][2] * GranaPeca[2][0];
		GranaMes[i][1] = PecaMes[i][0] * GranaPeca[0][1] + PecaMes[i][1] * GranaPeca[1][1] + PecaMes[i][2] * GranaPeca[2][1];
} 
for (int i = 0; i < 3; i++) { 
        for (int j = 0; j < 2; j++) 
            printf("%d ", GranaMes[i][j]);
			printf("\n");
}
return 0;
}
