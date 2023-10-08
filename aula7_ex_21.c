#include <stdio.h>
#include <stdlib.h>
void main(){
	int codPedido = 101, pz1OutroSabor = 0;
	int qtdPizza = 1;
	
	float totalCaixa = 0.0;
	typedef struct{
		char sabor1[20];
		float precoSabor1;
		char sabor2[20];
		float precoSabor2;
	}Pizza;
	
	typedef struct{
		char nome[50];
		int codPedido;
		Pizza pz1, pz2;
	}Pedido;

	Pedido pedido;
	
	printf("Digite o nome do cliente: ");
	scanf("%s", pedido.nome);
	pedido.codPedido = codPedido;
	codPedido++;
	printf("Digite a quantidade de pizzas do pedido ( 1 ou 2): ");
	scanf("%i", &qtdPizza);
	
	printf("\nPIZZA 1\n Digite o primeiro sabor da primeira pizza: ");
	scanf("%s", pedido.pz1.sabor1);
	printf("Digite o valor do primeiro sabor: ");
	scanf("%f", &pedido.pz1.precoSabor1);
	totalCaixa = totalCaixa + pedido.pz1.precoSabor1;
	printf("Digite 1 se deseja adicionar outro sabor ou 0 para nao:");
	scanf("%i", &pz1OutroSabor);
	if (pz1OutroSabor == 1){
		printf("Digite o segundo sabor da primeira pizza: ");
		scanf("%s", pedido.pz1.sabor2);
		printf("Digite o valor do segundo sabor: ");
		scanf("%f", &pedido.pz1.precoSabor2);
		totalCaixa = totalCaixa + pedido.pz1.precoSabor2;
	}else{
		pedido.pz1.precoSabor2 = 0;
	}
	

	if(qtdPizza == 2){
		printf("\nPIZZA 2\n  Digite o primeiro sabor da segunda pizza: ");
		scanf("%s", pedido.pz2.sabor1);
		printf("Digite o valor do primeiro sabor da segunda pizza: ");
		scanf("%f", &pedido.pz2.precoSabor1);
		totalCaixa = totalCaixa + pedido.pz2.precoSabor1;
		printf("Digite 1 se deseja adicionar outro sabor ou 0 para nao:");
		scanf("%i", &pz1OutroSabor);
		if (pz1OutroSabor == 1){
			printf("Digite o 2 sabor: ");
			scanf("%s", pedido.pz2.sabor2);
			printf("Digite o valor do sabor 2: ");
			scanf("%f", &pedido.pz2.precoSabor2);
			totalCaixa = totalCaixa + pedido.pz2.precoSabor2;
		}else{
			pedido.pz2.precoSabor2 = 0;
		}
		

	}
	
	printf("\n\n DADOS DO PEDIDO:");
	printf("\nCliente: %s", pedido.nome);
	printf("\n Numero do pedido: %i", pedido.codPedido);
	printf("\nQuantidade de pizzas: %i ",qtdPizza);
	printf("\n----- PRIMEIRA PIZZA -----");
	printf("\nSabor 1: %s", pedido.pz1.sabor1);
	printf("\nValor sabor 1: %.2f", pedido.pz1.precoSabor1);
	if(pedido.pz1.precoSabor2 == 0){
		printf("\nPizza sem segundo sabor");
	}else{
		printf("\nSabor 2: %s", pedido.pz1.sabor2);
		printf("\nValor sabor 2: %.2f", pedido.pz1.precoSabor2);
	}
	if(qtdPizza == 2){
	printf("\n\n----- SEGUNDA PIZZA ----- ");
	printf("\nSabor 1: %s", pedido.pz2.sabor1);
	printf("\nValor sabor 1: %.2f", pedido.pz2.precoSabor1);
	if(pedido.pz2.precoSabor2 == 0){
		printf("\nPizza sem segundo sabor");
	}else{
		printf("\nSabor 2: %s", pedido.pz2.sabor2);
		printf("\nValor sabor 2: %.2f", pedido.pz2.precoSabor2);
	}	
		
	}
	
	
	
	printf("\n\n##############\nTotal do pedido: %.2f\n##############", totalCaixa);
}
	
