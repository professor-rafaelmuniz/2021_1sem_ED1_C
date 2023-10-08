#include <stdio.h>
#include <stdlib.h>

struct no{
	int valor;
	struct no* prox;	
};

typedef struct no No;

void imprimir(No* teste){
	No *atual; 
	atual = teste;
	while (teste->prox != NULL){
		printf("\nSaida: %i", atual->valor);
		atual = atual->prox;
	}
	
}

int main(){
	
	No a;
	a.valor = 1;
	No b;
	b.valor = 10;
	b.prox = NULL;
	a.prox = &b;
	No c;
	c.valor = 30;
	b.prox = &c;
	c.prox = NULL;
	imprimir(&a);
	//printf("Valor: %i", a.prox->valor);
		
	
}
