#include <stdio.h>
#define TAM 5

int estaCheia(int *final){
	if(*final == TAM){
		return 1;
	}else{
		return 0;
	}
}

int estaVazia(int inicio, int final){
	if (inicio == final ){
		return 1;
	}else{
		return 0;
	}
}

void inicializar(int *inicio, int *final){
	*inicio = 0;
	*final = 0;
}
void inserir(int fila[], int *final){
	
	int ret;
	ret = estaCheia(final);
	if( ret == 1){
		printf("FILA CHEIA");
	}else{
		int num;
		printf("Digite um numero: ");
		scanf("%i", &num);
		fila[*final] = num;
		*final = *final + 1;
	}
	
}
void mostraFila(int fila[], int inicio, int final){
	int cont, ret;
	ret = estaVazia(inicio, final);
	printf("SAIDA: %d", ret);
	if( ret == 1){
		printf("FILA VAZIA");
		
	}else{
		printf("\n FILA: ");
		for(cont = inicio; cont< final; cont++){
			printf(" %i ", fila[cont]);
		}
	}
}
//void noAtual(){
//	printf("\n ATUAL: %i", fila[inicio]);
//}

void remover(int fila[], int *inicio, int final){
	int ret;
	ret = estaVazia(*inicio, final);
	if( ret == 1){
		printf("FILA VAZIA");
	}else{
		printf("\nREMOVER");
		*inicio = *inicio + 1;
	}

}

int main(){
	int fila[TAM], inicio, final;
	int ret, op = -1;
	inicializar(&inicio, &final);
	ret = estaVazia(inicio, final);
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
		scanf(" %d", &op);
		switch(op){
			case 1:
				inserir(fila, &final);
			break;
			case 2:
				remover(fila, &inicio, final);
			break;
			case 3:
				mostraFila(fila, inicio, final);
			break;
			
		}
	}
	return 0;
}

