#include <stdio.h>
#include "CurrencyConvertor.h"

float currencyconvertor(int value, double amt);
void printconvertedvalue(int value, float result);
void printamounttoconvert(int value, float amt);

int main(int argc, char const *argv[])
{
	
	printf("%s\n","Today's currency rates" );
	printf("%s\n","----------------------" );
	printf("%s\n"," " );

	printf("%s %f %s \n","1) 1 US $ = ", 0.9 , "Euro €");
	printf("%s %f %s \n","2) 1 US $ = ", 0.77 , "Pounds £");
	printf("%s %f %s \n","3) 1 Pound £ = ", 1.16 , "Euro €");
	printf("%s %f %s \n","4) 1 Euro € = ", 1.12 , "US $");
	printf("%s %f %s \n","5) 1 Pound £ = ", 1.29 , "US $");
	printf("%s %f %s \n","6) 1 Euro € = ", 0.86 , "Pound £");

	printf("%s\n"," " );
	printf("%s \n","What conversion do you want to make? ");
	printf("%s \n","Enter 1, 2 , 3 , 4 , 5 or 6");

	int value;
	float result;
	double amt;

	scanf("%i",&value);
	printf("%s %i\n", "You entered : ",value);

	printf("%s\n", "Enter the amount you want to convert");
	scanf("% lf",&amt);
	printamounttoconvert(value,amt);

	result = currencyconvertor(value,amt);
	printconvertedvalue(value,result);
	return 0;
}
