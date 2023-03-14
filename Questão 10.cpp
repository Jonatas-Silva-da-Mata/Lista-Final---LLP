#include <stdio.h>
#include <locale.h>
#define LIN 2
#define COL 2

int main(){
	setlocale(LC_ALL, "Portuguese_Brazil");
	
	int matrizoriginal[LIN][COL];
	int matrizreflexao[LIN][COL];
		
	printf("\t\t\t\t\tMatriz Reflexão\n\n");
	
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			printf("Digite o valor da posição [%d][%d]: ", i, j);
			scanf("%d", &matrizoriginal[i][j]);
		}
	}
	
	printf("\nMatriz Original\n");
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			printf("%d\t", matrizoriginal[i][j]);
		}
		printf("\n");
	}
	
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			if(j==0){
				matrizreflexao[i][j]=matrizoriginal[i][j];
			} else {
				matrizreflexao[i][j]=matrizoriginal[i][j];
			}
		}
	}
	printf("\nMatriz Reflexão ao eixo y: \n");
	for(int i=0; i<LIN; i++){
		for(int j=0; j<COL; j++){
			printf("%d\t", matrizreflexao[i][j]);
		}
		printf("\n");
	}
	
	
	
	return 0;
}
