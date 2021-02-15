int n,m;

int ** transpose(int matrix[][m]){
	int ** transpose_matrix;
	transpose_matrix = malloc(sizeof(int*)* m);
     
    for(int i = 0; i < m; i++)
    	transpose_matrix[i] = malloc(sizeof(int*)* n);

    for(int i = 0; i < m; i++)
    	for(int j = 0; j < n; j++)
    		transpose_matrix[i][j] = matrix[j][i];
   
    return transpose_matrix;
};