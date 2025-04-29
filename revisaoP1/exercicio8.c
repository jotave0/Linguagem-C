#include <stdio.h>

int main(){
	
struct regAluno
{
	char aluno[9];
	float nota;
	float falta;
};
typedef struct regAluno TAluno;
TAluno TabAluno[20];
float media = 0;

for (int i = 0; i < 20 ;i++){
	printf("Informe o RA, a nota e as faltas do aluno %d \n",i + 1);
	scanf("%s %f %f", TabAluno[i].aluno, &TabAluno[i].nota, &TabAluno[i].falta);
	media += TabAluno[i].nota;
}
media = media /20;

for (int i = 0; i < 20; i++){
	if (TabAluno[i].nota > media && TabAluno[i].nota >= 5 && TabAluno[i].falta < 10){
		printf("%s %f %f", TabAluno[i].aluno, TabAluno[i].nota, TabAluno[i].falta);
	}
}
return 0;
}
