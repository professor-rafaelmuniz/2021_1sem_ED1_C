#include <stdio.h>
#include <stdlib.h>

typedef struct no{
	int valor;
	struct no *prox;
}No;

typedef struct{
	No *inicio;
}Lista;


void buscarNoNaLista(Lista *l, int valor){
	No *aux = l->inicio;
	int achou = 0;
	while (aux != NULL){
		if (aux->valor == valor){
			achou = 1;
			break;
		}else{
			aux = aux->prox;
		}
	}
	if(achou == 1){
		printf("ACHOU");
	}else{
		printf("NAO ACHOU");
	}
}

void inserirNoInicioDaLista(Lista *l){
	No *novo;
	novo = malloc(sizeof(No));
	novo->valor = 50;
	novo->prox = l->inicio;
	l->inicio = novo;
}

void inserirNoFinalDaLista(Lista *l){
	No *aux = l->inicio, *ant;
	while (aux->prox != NULL){
		aux = aux->prox;
	}
	No *novo;
	novo = malloc(sizeof(No));
	novo->valor = 70;
	novo->prox = NULL;
	aux->prox = novo;
}

void imprimirLista(Lista *l){
	No *aux = l->inicio;
	while (aux != NULL){
		printf(" %i ", aux->valor);
		aux = aux->prox;
	}
}

void removerNoDaLista(Lista *l, int valor){
	No *aux, *ant;
	aux = ant = l->inicio;
	int achou = 0;
	while (aux != NULL){
		if (aux->valor == valor){
			achou = 1;
			break;
		}else{
			ant = aux;
			aux = aux->prox;
		}
	}
	if(achou == 1){
		printf("\REMOVER: %i\n", aux->valor);
		// Se for o último elemento
		if (aux->prox == NULL){
			ant->prox = NULL;
			free(aux);
		}else if(aux->valor == l->inicio->valor){
		// Se for o primeiro elemento
			l->inicio = aux->prox;
			free(aux);
		}else{
			ant->prox = aux->prox;
			free(aux);
		}
		
	}else{
		printf("NAO ACHOU");
	}
	
}

No* novoNo(int valor){
	No *novo;
	novo = malloc(sizeof(No));
	novo->valor = valor;
	return novo;
}

void inserirNoOrdenado(Lista *l, int valor){
	No *aux, *ant;
	aux = ant = l->inicio;
	if (l->inicio == NULL){
		No *novo = novoNo(valor);
		novo->prox = NULL;
		l->inicio = novo;
	}else{

	while (aux != NULL){
		if (aux->valor > valor){
			if (aux == ant){
				No *novo = novoNo(valor);
				novo->prox = l->inicio;
				l->inicio = novo;
				break;
			}else{
				No *novo = novoNo(valor);
				novo->prox = ant->prox;
				ant->prox = novo;
				break;
			}
			
		}else if(aux->prox == NULL){
			No *novo = novoNo(valor);
			novo->prox = NULL;
			aux->prox = novo;
			break;

		}
		ant = aux;
		aux = aux->prox;
	}
	}
}

void main(){
	No *no1, *no2, *no3, *no4, *aux;
	Lista lista;
	/*
	no1 = malloc(sizeof(No));
	no2 = malloc(sizeof(No));
	no3 = malloc(sizeof(No));
	no4 = malloc(sizeof(No));
	
	no1->valor = 10;
	no2->valor = 20;
	no3->valor = 30;
	no4->valor = 40;
	
	no1->prox = no2;
	no2->prox = no3;
	no3->prox = no4;
	no4->prox = NULL;
	
	lista.inicio = no1;
	*/
	lista.inicio = NULL;
	//aux = lista.inicio; // primeiro no da lista
	//aux = lista.inicio->prox; // segundo elemento
	//aux = aux->prox; // terceiro elemento
	//printf("Saida: %i", aux->valor);
	//printf("\nLista: ");
	//imprimirLista(&lista);
	//buscarNoNaLista(&lista, 32);

	//imprimirLista(lista.inicio);
	//inserirNoInicioDaLista( &lista);
	
	//printf("\nLista: ");
	//imprimirLista(lista.inicio);
	//inserirNoFinalDaLista(lista.inicio);
	
	//printf("\nLista: ");
	//imprimirLista(lista.inicio);

	//inserirNoFinalDaLista(&lista);
	//printf("\nLista: ");
	//imprimirLista(&lista);
	//removerNoDaLista(&lista, 10);
	/*REMOVER NO FINAL
	printf("\nLista: ");
	imprimirLista(lista.inicio);
	removerNoDaLista(lista.inicio, 40);
	imprimirLista(lista.inicio);
	printf("\n Inserir o 70.\n");
	inserirNoFinalDaLista(lista.inicio);
	imprimirLista(lista.inicio);
	*/
	
	/* REMOVER NO INICIO
	printf("\nLista: ");
	imprimirLista(lista.inicio);
	removerNoDaLista(lista.inicio, &lista, 10);
	imprimirLista(lista.inicio);
	printf("\nLista: ");
	inserirNoInicioDaLista( &lista);
	imprimirLista(lista.inicio);
	*/
	
	//printf("\nLista: ");
	//imprimirLista(lista.inicio);
	//removerNoDaLista(lista.inicio, &lista, 20);
	//printf("\nLista: ");
	//imprimirLista(lista.inicio);
	
	inserirNoOrdenado(&lista, 20);
	imprimirLista(&lista);
	printf("\n\n");
	inserirNoOrdenado(&lista, 15);
	imprimirLista(&lista);
	printf("\n\n");
	inserirNoOrdenado(&lista, 35);
	imprimirLista(&lista);
	printf("\n\n");
	inserirNoOrdenado(&lista, 80);
	imprimirLista(&lista);
	printf("\n\n");
	inserirNoOrdenado(&lista, 88);
	imprimirLista(&lista);
	

}
