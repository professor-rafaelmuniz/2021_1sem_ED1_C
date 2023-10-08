#include <stdio.h>
int main(){
	
	typedef struct {
		int numero;
	} ESTRUTURA;
	
	printf("Asd");
	
	ESTRUTURA e, *ptr;

	e.numero = 10;
	
	ptr = &e;
	
	printf("\n%i", e.numero);
	printf("\n%i", ptr->numero);
	ptr->numero = 50;
	printf("\n%i", ptr->numero);
	printf("\n%i", e.numero);
	
	
}
