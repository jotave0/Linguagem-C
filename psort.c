#include <stdio.h>
#include <stdlib.h>


int compara (const void *p1, const void *p2)
{
  int *i = (int *)p1;
  int *j = (int *)p2;
	
  if(*i > *j)
	return 1;
  else
	if(*i < *j)
		return -1;
	else
		return 0;
}	

int main (void)
{
	int i, num[10] = {2, 1, 6, 5, 8, 7, 9, 6, 2, 0};
	
	printf("Matriz original: ");
	for (i = 0; i < 10;i++)
		printf("%d", num[i]);
	
	qsort(num, 10, sizeof(num[0]), compara);
	
	printf("\n\nMatriz ordenada: ");
	for (i = 0; i < 10; i++)
		printf("%d", num[i]);
	
	return 0;
}