#include <stdio.h>
void calculaNovoSalario(float *salario, int meta){
	if (meta == 1){
		*salario = *salario * 1.2;
	}
}
int main(){
	float salario;
	int meta;
	printf("Digite seu salario: ");
	scanf("%f", &salario);
	printf("Informe 0 se NAO bateu a meta e 1 se SIM. ");
	scanf("%i",&meta);
	printf("\nSALARIO SEM META: %f", salario);
	calculaNovoSalario(&salario, meta);
	printf("\nSALARIO COM META: %f", salario);
	
	
	
}
