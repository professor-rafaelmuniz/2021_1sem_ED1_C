#include <stdio.h>

typedef struct{
	int idade;
	float peso, altura;
}Atleta;

Atleta* novoAtleta(int idade, float altura, float peso){
	Atleta *ptrAtleta;
	ptrAtleta = malloc (sizeof(ptrAtleta));
	ptrAtleta->idade = idade;
	ptrAtleta->altura = altura;
	ptrAtleta->peso = peso;
	
	return ptrAtleta;
}
void main(){
	Atleta *ptrAtleta1, *ptrAtleta2;
	ptrAtleta1 = malloc (sizeof(ptrAtleta1));
	ptrAtleta1->altura = 1.68;
	
	ptrAtleta2 = novoAtleta(40, 1.80, 65.00);
	
	printf("Saída: %f", ptrAtleta2->altura);
	
	free(ptrAtleta2);
	printf("Saída: %f", ptrAtleta2->altura);
	
	
	
}

