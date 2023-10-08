#include <stdio.h>
#include <stdlib.h>

typedef struct No{
	struct No *ant;
	int valor;
	struct No *prox;
}No;

typedef struct{
	No *inicio;
}Lista;


void inserirNo(Lista *l){
	No *aux, *ant;
	aux = ant = l->inicio;
	int valor;
	printf("Digite o valor do no:");
	scanf("%i", &valor);
	No* novo 		= malloc(sizeof(No));
	novo->valor 	= valor;
	if (l->inicio == NULL){
		printf("\nLISTA VAZIA");
		novo->ant 	= NULL;
		novo->prox 	= NULL;
		l->inicio 	= novo;
	}else{
		while (aux!= NULL){
			ant = aux;
			aux = aux->prox;
		}
		if (aux == NULL){// Ultimo elemento
			printf("\nULTIMO NO");
			novo->ant 	= ant;
			novo->prox 	= NULL;
			ant->prox 	= novo;
		}else{
			printf("\nAQUI");
			printf("AUX: %i ANT %i ", aux->valor, ant->valor);
			novo->ant 	= aux->ant;
			novo->prox 	= ant->prox;
			ant->prox 	= novo;
			aux->ant 	= novo;
		}
	}
}

void inserirNoOrdenado(Lista *l){
	No *aux, *ant;
	aux = ant = l->inicio;
	int valor;
	printf("Digite o valor do no:");
	scanf("%i", &valor);
	No* novo 		= malloc(sizeof(No));
	novo->valor 	= valor;
	if (l->inicio == NULL){//LISTA VAZIA
		//printf("\nLISTA VAZIA");
		novo->ant 	= NULL;
		novo->prox 	= NULL;
		l->inicio 	= novo;
	}else{
		while (aux!= NULL && valor < aux-valor){
			ant = aux;
			aux = aux->prox;
		}
		if (aux == NULL){// Ultimo elemento
			//printf("\nULTIMO NO");
			novo->ant 	= ant;
			novo->prox 	= NULL;
			ant->prox 	= novo;
		}else{
			printf("\nAQUI");
			printf("AUX: %i ANT %i ", aux->valor, ant->valor);
			novo->ant 	= aux->ant;
			novo->prox 	= ant->prox;
			ant->prox 	= novo;
			aux->ant 	= novo;
		}
	}
}

void imprimir(Lista *l){
	No *aux = l->inicio, *auxInicio, *ant;
	if(l->inicio == NULL){
		printf("\n[IMPRIMIR]LISTA VAZIA");
	}else{
		printf("\n[IMPRIMIR LISTA]\n");
		while (aux != NULL){
			printf (" %i ", aux->valor);
			ant = aux;
			aux = aux->prox;
		}
		auxInicio = ant;
		printf("\n[IMPRIMIR LISTA DE TRAS PARA FRENTE]\n");
		while (auxInicio != NULL){
			printf (" %i ", auxInicio->valor);
			auxInicio = auxInicio->ant;
		}
	}
}

void main(){
	Lista l;
	l.inicio = NULL;
	inserirNoOrdenado(&l);
	inserirNoOrdenado(&l);
	inserirNoOrdenado(&l);
	inserirNoOrdenado(&l);
	inserirNoOrdenado(&l);
	imprimir(&l);	
	
}
