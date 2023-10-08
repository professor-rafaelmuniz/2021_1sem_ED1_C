#include <stdio.h>
#include <stdlib.h>
void main(){
	typedef struct{
		char nome[50];
		int idade
	}Pessoa;
	int c;
	Pessoa p[5], *ptrP;
	for(c = 0; c < 5; c++){
		setbuf(stdin, NULL);
		printf("\nDigite seu nome: ");
		scanf("%49[^\n]", p[c].nome);
		ptrP = &p[c];
		strcpy(p[c].nome,"Teste");
		printf("\nSAida: %s", p[c].nome);
		strcpy(ptrP->nome,"Sinistro");
		printf("\nSAida: %s", ptrP->nome);
	}
}
