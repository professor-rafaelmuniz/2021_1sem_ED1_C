#include <stdio.h>
void main(){
	float p1, t1, mb1;
	float p2, t2, mb2, mf;
	printf("Digite a nota da prova: ");
	scanf("%f", &p1);
	printf("Digite a nota do trabalho: ");
	scanf("%f", &t1);
	mb1 = (p1 * 0.7) + (t1 * 0.3);
	printf("Media 1 bim: %f ", mb1);
	printf("Digite a nota da prova: ");
	scanf("%f", &p2);
	printf("Digite a nota do trabalho: ");
	scanf("%f", &t2);
	mb2 = (p2 * 0.7) + (t2 * 0.3);
	printf("Media 2 bim: %f ", mb2);
	mf = (mb1 + mb2)/2;
	printf("Media Final: %f", mf);	
	
}
