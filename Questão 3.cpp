#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2

int main (){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	float matrizoriginal[LIN][COL];
	float matrizinversa[LIN][COL];
	float determinante, dp = 1, ds = 1, aux;
	
	printf("\t\t\t\t\tMATRIZ INVERSA\n\n");

	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			printf("Digite o valor daposição [%d] [%d]", i, j);
			scanf("%f", &matrizoriginal);
		}
	}

	printf("\t\t\t\t\tMatriz Original\n\n");
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			printf("%.2f\t", matrizoriginal[i][j]);
		}
		printf("\n");
}
	
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			if(i==j){
				dp*=matrizoriginal[i][j];
			}
			if(j==(COL-1)-i){
				ds*=matrizoriginal[i][j];
			}
		}
	}
	
	determinante = dp - ds;
	
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			matrizinversa[i][j] = -matrizoriginal[i][j]/determinante;
		}
	}
	
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			if(j==(COL - 1) - i){
				matrizinversa[i][j] = -matrizinversa[i][j];
			}
		}
	}
	
	
	aux = matrizinversa[0][0];
	matrizinversa[0][0] = matrizinversa[1][1];
	matrizinversa[1][1] = aux;
	
	printf("\nMatriz Inversa: \n");
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			printf("%.2f\t", matrizinversa[i][j]);
		}
		printf("\n");
	}
	return 0;	
}
