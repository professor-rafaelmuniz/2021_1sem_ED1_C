#include <stdio.h>
#define TAM 5
int fila[TAM], inicio, final;

int estaCheia(){
	if(final == TAM){
		return 1;
	}else{
		return 0;
	}
}

int estaVazia(){
	if (inicio == final ){
		return 1;
	}else{
		return 0;
	}
}

void inicializar(){
	inicio = 0;
	final = 0;
}
void inserir(){
	
	int ret;
	ret = estaCheia();
	if( ret == 1){
		printf("FILA CHEIA");
	}else{
		int num;
		printf("Digite um numero: ");
		scanf("%i", &num);
		fila[final] = num;
		final++;
	}
	
}
void mostraFila(){
	int cont, ret;
	ret = estaVazia();
	if( ret == 1){
		printf("FILA VAZIA");
	}else{
		printf("\n FILA: ");
		for(cont = inicio; cont< final; cont++){
			printf(" %i ", fila[cont]);
		}
	}
}
void noAtual(){
	printf("\n ATUAL: %i", fila[inicio]);
}

void remover(){
	int ret;
	ret = estaVazia();
	if( ret == 1){
		printf("FILA VAZIA");
	}else{
		printf("\nREMOVER");
		inicio++;
	}

}

void main(){
	int ret, op;
	inicializar();
	ret = estaVazia();
	if(ret == 1){
		printf("\nFILA VAZIA\n");
	}
	while(op != 0 ){
		printf("\n MENU");
		printf("\n1 - Inserir");
		printf("\n2 - Remover");
		printf("\n3 - Imprimir");
		printf("\n0 - Sair");
		
		printf("\nDigite a opcao desejada: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				inserir();
			break;
			case 2:
				remover();
			break;
			case 3:
				mostraFila();
			break;
			
		}
	}
	
	
		

}

