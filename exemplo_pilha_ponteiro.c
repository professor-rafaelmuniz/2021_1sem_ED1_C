#include <stdio.h>
#define TAM 10

void empilha(int p[], int valor, int *topo ){
	int cont;
	p[*topo] = valor;
	*topo=*topo+1;
	printf("\nEMPILHA");
	for(cont =0; cont<4; cont++){
		printf("\nPos %i: %i", cont, p[cont]);
	}
}

void desempilha(int p[], int *topo ){
	int cont;
	*topo=*topo-1;
	p[*topo] = -1;
	printf("\n\nDESEMPILHA");
	for(cont =0; cont<4; cont++){
		printf("\n\nPos %i: %i", cont, p[cont]);
	}

}

void tamanhoPilha(int *topo){
	printf("\nTopo da pilha: %i", *topo);	
}

int main(){
	
	int pilha[10]={-1,-1,-1,-1}, topo = 0, cont;

	tamanhoPilha(&topo);
	empilha(pilha, 2, &topo);
	tamanhoPilha(&topo);
	empilha(pilha, 5, &topo);
	empilha(pilha, 9, &topo);
	tamanhoPilha(&topo);
	desempilha(pilha,&topo);
	tamanhoPilha(&topo);
	empilha(pilha, 10, &topo);
	
}
