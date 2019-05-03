#include <stdio.h>

void printMatrix(int * * matrix,int rows,int cols);
void createMatrix(int rows,int cols);
void tranposeMatrix(int * * matrix,int rows,int cols);

void createMatrix(int rows,int cols){
	int * * M;
	int i,j;
	M = (int * * )malloc(sizeof(int *) * rows);

	for (i = 0; i < rows; i++){
		M[i] = (int * )malloc(sizeof(int) * cols);

		for (j = 0; j < cols; j++){
			M[i][j] = (rand() % 10);
		}
	}
	printMatrix(M,rows,cols);
	
	//free(M[i]);
	//free(M);
	printf("%s \n", " ");
	printf("%s \n", "Transposing Matrix . Please wait.... ");
	tranposeMatrix(M,rows,cols);
}

void printMatrix(int * * matrix,int rows,int cols){
	for (int i = 0; i < rows; i++){

		for (int j = 0; j < cols; j++){
			printf(" %i \t", matrix[i][j]);
		}
		printf("%s\n", " ");
	}
}

void tranposeMatrix(int * * matrix,int rows,int cols){
	int * * M = matrix;
	int i,j;
	M = (int * * )realloc(M,sizeof(int *) * rows);

	for (i = 0; i < rows; i++){
		M[i] = (int * )realloc(M[i],sizeof(int) * cols);
		for (j = 0; j < cols; j++){
			M[i][j] = M[j][i];
		}
	}
	printMatrix(M,rows,cols);
	
	//free(M[i]);
	//free(M);
}
void exchange(float a, float b){
	float * ptr_a; //pointer to a
	float * ptr_b; //pointer to b
	float * ptr_c; //pointer to aid in exchange

	ptr_a = &a; // stores address of a
	ptr_b = &b; // stores address of b

	*ptr_c = *ptr_a; // stores contents of ptr_a in  ptr_c --> ie value of a
	*ptr_a = *ptr_b; // stores contents of ptr_b in  ptr_a  --> ie value of b
	*ptr_b = *ptr_c; // stores contents of ptr_c in  ptr_b  --> ie value of a

	a = *ptr_a; //stores current content of ptr_a --> ie intial value of b
	b = *ptr_b; //stores current content of ptr_b --> ie initial value of a

	printf("%s %f\n", "First number is : ",a);
	printf("%s %f\n", "Second number is : ",b);
}