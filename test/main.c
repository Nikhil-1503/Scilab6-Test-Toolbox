#include<stdio.h>
#include<stdlib.h>
#include"trans.c"

int main(){
	extern int n,m;
	printf("Enter the number of rows and number of columns in the matrix:\n");
	scanf("%d %d",&n,&m);

	int input_matrix[n][m];

	printf("Enter the matrix elements:\n");
	for(int i = 0; i < n; i++)
		for(int j = 0; j < m; j++)
			scanf("%d",&input_matrix[i][j]);

	printf("The original matrix is\n");
	for(int i = 0; i < n; i++){
		for(int j = 0; j < m; j++)
			printf("%2d ",input_matrix[i][j]);
		printf("\n");
	}

	int **output_matrix = transpose(input_matrix);

	printf("The transpose of the given matrix is: \n");
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++)
			printf("%2d ",output_matrix[i][j]);
		printf("\n");
	}
	return 0;
}