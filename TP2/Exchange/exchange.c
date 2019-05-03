#include <stdio.h>
#include <stdlib.h>
#include "exchange.h"

void exchange(float a, float b);
void printMatrix(int * * matrix,int rows,int cols);
void createMatrix(int rows,int cols);
void tranposeMatrix(int * * matrix,int rows,int cols);

int main(int argc, char const *argv[])
{
	float num1 ;
	float num2 ;
	if(argc == 1) {
	
	
		printf("%s\n","Welcole to the exchanger" );

		printf("%s\n","Please enter first value" );
		scanf("%f",&num1);

		printf("%s\n","Please enter second value" );
		scanf("%f",&num2);

		printf("%s %f\n", "First number is : ",num1);
		printf("%s %f\n", "Second number is : ",num2);
		printf("%s \n", " ");
		printf("%s \n", "The exchanger is working now . Please wait.... ");
		exchange(num1,num2);

		printf("%s \n", " ");
		printf("%s \n", "Creating Matrix . Please wait.... ");
		createMatrix(6,6);
	}
	else {
		
		num1 = atof(argv[1]);
		num2 = atof(argv[2]);

		printf("%s %f\n", "First number is : ",num1);
		printf("%s %f\n", "Second number is : ",num2);
		printf("%s \n", " ");
		printf("%s \n", "The exchanger is working now . Please wait.... ");
		exchange(num1,num2);
		printf("%s \n", " ");
		printf("%s \n", "Creating Matrix . Please wait.... ");
		createMatrix(4,4);
	}

	return 0;
}

