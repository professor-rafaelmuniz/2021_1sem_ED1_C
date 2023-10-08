#include <stdio.h>

struct lista {
 int info;
 struct lista* prox;
};
typedef struct lista Lista;


/* função de inicialização: retorna uma lista vazia */
Lista* inicializa (void)
{
 return NULL;
}

/* inserção no início: retorna a lista atualizada */
Lista* insere (Lista* l, int i)
{
 Lista* novo = (Lista*) malloc(sizeof(Lista));
 novo->info = i;
 novo->prox = l;
 return novo;
}


void main(){
 printf("a");
 Lista* l; /* declara uma lista não inicializada */
 l = inicializa(); /* inicializa lista como vazia */
 l = insere(l, 23); /* insere na lista o elemento 23 */
 l = insere(l, 45); /* insere na lista o elemento 45 */
	
	
}
