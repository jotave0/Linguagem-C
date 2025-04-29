#include <stdio.h>

int main (){

int qtdFarinhaN, qtdOvoN, qtdAcucarN;
int qtdFarinhaD, qtdOvoD, qtdAcucarD;
int divF, divO, divA;

scanf("%d %d %d", &qtdFarinhaN, &qtdOvoN, &qtdAcucarN);
scanf("%d %d %d", &qtdFarinhaD, &qtdOvoD, &qtdAcucarD);

while (qtdFarinhaD > 0 && qtdAcucarD > 0 && qtdOvoD > 0){
	divF = qtdFarinhaD / qtdFarinhaN ;
	divO = qtdOvoD / qtdOvoN;
	divA = qtdAcucarD / qtdAcucarN;
	
	if( divF <= divO && divF <= divA){
		printf("A quantidade de doces que podem ser feitos sao %d \n", divF);
	} else 
		if (divO <= divA){
			printf("A quantidade de doces que podem ser feitos sao %d \n", divO);
		} else 
			printf("A quantidade de doces que podem ser feitos sao %d \n", divA);
		
	scanf("%d %d %d", &qtdFarinhaD, &qtdOvoD, &qtdAcucarD);
	}

return 0;
}	