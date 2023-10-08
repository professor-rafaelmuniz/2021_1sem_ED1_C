#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no* prox;	
}No;

//typedef struct no No;


int main(){
	
	No *a;
	a->valor = 1;
	No b;
	b.valor = 10;
	b.prox = NULL;
	a->prox = &b;
	No c;
	c.valor = 30;
	b.prox = &c;
	c.prox = NULL;
	printf("Valor: %i", a->prox->valor);
		
	
}
