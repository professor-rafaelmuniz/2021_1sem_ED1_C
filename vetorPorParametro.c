#include <stdio.h>
void teste(int v[], int pos){
	printf("\nSaida: %i", v[pos]);
	v[0] = 50;
}

int main(){
	int vet[3]={2,3,5};
	teste(vet, 0);
	teste(vet, 0);
	
	
}
