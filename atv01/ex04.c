#include <stdio.h>

int main(){

int PecaMes	[3][3];
int GranaPeca [3][2];
int GranaMes [3][2] = {0};

char *meses[3] = {"Janeiro", "Fevereiro", "Marco"};
for (int i = 0; i < 3; i++){
	printf("Digite a producao de pecas P1, P2 e P3 nos mes de %c", meses[i]);
	for (int j = 0; j < 3; j++)
		scanf("%i", &PecaMes[i][j]);
		}
for (int i = 0; i < 3; i++){
	printf("Digite o custo e o lucro de cada peca");
	for (int j = 0; j < 2; j++)
		scanf("%i", &GranaPeca[i][j]);
	}


	
scan
return 0;
}