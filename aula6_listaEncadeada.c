#include <stdio.h>
#include <stdlib.h>
struct no{
	int valor;
	struct no *prox;
};

typedef struct no No;

typedef struct{
	No* primeiro; 
}lista;


void imprimirLista(lista *l){
	if(l->primeiro == NULL){
		printf("Vazia");
	}else{
		No *inicio;
		int i;
		inicio = l->primeiro;
		while(inicio != NULL){
			printf(" %i ", inicio->valor);
			inicio = inicio->prox;
		}
	}
}

No* ultimoElemento(lista *l){
	No *inicio, *corrente;
	int i;
	inicio = l->primeiro;
	corrente = l->primeiro;
	while(inicio != NULL){
		if (inicio->prox != NULL){
			corrente = inicio->prox;
		}
		inicio = inicio->prox;
	}
	return corrente;
}

void novoNo(lista *l){
	No* no = malloc(sizeof(No));
	if (no == NULL){
		printf("Erro ao alocar nova área na memória");
	}else{
		int valor;
		printf("Digite o novo no: ");
		scanf("%i", &valor);
		no->valor = valor;
		no->prox = NULL;
		No* corrente;
		if(l->primeiro == NULL){
			l->primeiro = no;
		}else{
			corrente = ultimoElemento(l);
			corrente->prox = no;
		}
	}	
}
void inicializar(lista *l){
	l->primeiro = NULL;
}
void main(){
	
	lista l;
	inicializar(&l);
	novoNo(&l); 
	novoNo(&l); 
	novoNo(&l); 
	novoNo(&l); 
	imprimirLista(&l);
}
