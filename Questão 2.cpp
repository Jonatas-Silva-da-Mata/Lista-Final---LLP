#include <stdio.h>
#include <locale.h>
#define TMAX 2

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");

	int matrizA[TMAX][TMAX], matrizB[TMAX][TMAX], matrizC[TMAX][TMAX];
	
	for(int i=0; i<TMAX; i++) {
		for(int j=0; j<TMAX; j++){
			printf("Informe o valor da %dª linha e da %dª coluna da matrizA: ", i+1, j+1);
			scanf("%d", &matrizA[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<TMAX; i++){
		for(int j=0; j<TMAX; j++){
			printf("Informe o valor da %dª linha e da %dª coluna da matrizB: ", i+1, j+1);
			scanf("%d", &matrizB[i][j]);
		}
		printf("\n");
	}
	
	printf("\t\tMATRIZ A\n\n");
	
	for(int i=0; i<TMAX; i++) {
		for(int j=0; j<TMAX; j++){
			printf("%d \t", matrizA[i][j]);
		}
		printf("\n");
	}
	
	printf("\t\tMATRIZ B\n\n");
	
	for(int i=0; i<TMAX; i++) {
		for(int j=0; j<TMAX; j++){
			printf("%d \t", matrizB[i][j]);
		}
		printf("\n");
	}
	
	printf("\t\tMATRIZ C\n\n");
	
	for(int i=0; i<TMAX; i++){
		for(int j=0; j<TMAX; j++){
			for(int k=0; k<TMAX; k++){
				matrizC[i][j] = matrizC[i][j] + matrizA[i][k]*matrizB[k][j];
			}
		}
	}
	
	for(int i=0; i<TMAX; i++){
		for(int j=0; j<TMAX; j++){
			printf("%d \t", matrizC[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}










