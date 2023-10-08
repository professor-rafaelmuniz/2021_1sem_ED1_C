#include <stdio.h>

struct lista {
 int info;
 struct lista* prox;
};
typedef struct lista Lista;

/* fun��o vazia: retorna 1 se vazia ou 0 se n�o vazia */
int vazia (Lista* l)
{
 if (l == NULL)
 return 1;
 else
 return 0;
}

/* fun��o busca: busca um elemento na lista */
Lista* busca (Lista* l, int v)
{
 Lista* p;
 for (p=l; p!=NULL; p=p->prox)
 if (p->info == v)
 return p;
 return NULL; /* n�o achou o elemento */
}


/* fun��o de inicializa��o: retorna uma lista vazia */
Lista* inicializa (void)
{
 return NULL;
}

/* inser��o no in�cio: retorna a lista atualizada */
Lista* insere (Lista* l, int i)
{
	Lista* novo = (Lista*) malloc(sizeof(Lista));
	novo->info = i;
	novo->prox = l;
 return novo;
}

void imprime (Lista* l)
{
 	Lista *p = l; /* vari�vel auxiliar para percorrer a lista */
 	if(p == NULL){
 		printf("VAZIO");
	}
	 
	 while(p != NULL){
 		printf("info = %d\n", p->info);
 		p = p->prox;
	 }
	 
 		
}

void main(){
 Lista* l; /* declara uma lista n�o inicializada */

 l = inicializa(); /* inicializa lista como vazia */
  imprime(l);
 //l = insere(l, 23); /* insere na lista o elemento 23 */
 //l = insere(l, 45); /* insere na lista o elemento 45 */
 //l = insere(l, 52); /* insere na lista o elemento 45 */
 //l = insere(l, 20); /* insere na lista o elemento 45 */
 //imprime(l);
	
	
}
