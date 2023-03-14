#include <stdio.h>
#include <locale.h>

int main() {
	setlocale (LC_ALL, "Portuguese_Brazil");
	int A[3][3];
	int AT[3][3];
	
	for(int i=0; i<3; i++){
		printf("Linha %d", i+1);
			for(int j=0; j<3; j++){
				printf("\n%dª da coluna: ", j+1);
				scanf("%d", &A[i][j]);				
			}
			printf("\n");
	}
	printf("\n\n");
	printf("Matriz Original\n\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d \t", A[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nMatriz Transposta\n");
	
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			AT[i][j] = A[j][i];
		}
	}
	printf("\n");
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			printf("%d \t", AT[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
