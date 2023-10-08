#include <stdio.h>

int main(){
	int num1 = 50;
	int num2;
	int *ptrNum;//Ponteiro
	int **ptrNum2;//Ponteiro para ponteiro
	
	num2 	= num1;
	ptrNum 	= &num1;
	ptrNum2 = &ptrNum;
	
	printf("\nNum1: %d - End: %d", num1, &num1);
	printf("\nNum2: %d - End: %d", num2, &num2);
	printf("\n*PTR: %d - End: %d", ptrNum, &ptrNum);
	
	
	printf("\n**PTR_2 : %d - End: %d", ptrNum2, &ptrNum2);
	printf("\n**PTR_2 *: %d - End: %d", *ptrNum2, &ptrNum2);
	printf("\n**PTR_2 **: %d - End: %d", **ptrNum2, &ptrNum2);
	ptrNum = ptrNum + 1;
	printf("\n*PTR: %d - End: %d", ptrNum, &ptrNum);
	
	return 0;
}
