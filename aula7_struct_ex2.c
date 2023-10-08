#include <stdio.h>
#include <stdlib.h>
void main(){
	typedef struct{
		char cidade[50];
		char estado[50];
	}Residencia;
	
	typedef struct{
		char nome[50];
		int idade;
		Residencia r;
	}Pessoa;
	
	Pessoa p[5], *ptrP;
	ptrP = &p[0];
	setbuf(stdin, NULL);
	printf("Digite seu nome: ");
	scanf("%49[^\n]", p[0].nome);
	setbuf(stdin, NULL);
	printf("Digite sua cidade: ");
	scanf("%49[^\n]", p[0].r.cidade);
	
	printf("Saida: %s", p[0].nome);
	printf("Saida cidade: %s", p[0].r.cidade);
	
	printf("\nSaida ponteiro: %s", ptrP->nome);
	printf("\nSaida ponteiro cidade: %s", ptrP->r.cidade);
}
