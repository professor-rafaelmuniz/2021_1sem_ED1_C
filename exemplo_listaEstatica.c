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

void imprime (Lista* l)
{
 	Lista* p = l; /* variável auxiliar para percorrer a lista */
 	while(p != NULL){
 		printf("info = %d\n", p->info);
 		p = p->prox;
	 }
	 
 		
}

void main(){
 Lista* l; /* declara uma lista não inicializada */
 l = inicializa(); /* inicializa lista como vazia */
 l = insere(l, 23); /* insere na lista o elemento 23 */
 l = insere(l, 45); /* insere na lista o elemento 45 */
 l = insere(l, 52); /* insere na lista o elemento 45 */
 l = insere(l, 20); /* insere na lista o elemento 45 */
 imprime(l);
	
	
}
