#include <stdio.h>
float currencyconvertor(int value, double amt){
	float result;

	printf("%s\n"," " );
	switch(value){
		case 1: 
			printf("%s \n","You are converting US Dollars $ to Euros €");
			printf("%s\n","----------------------" );
			result = amt * 0.90;
			break;

		case 2: 
			printf("%s \n","You are converting US Dollars $ to Pounds £");
			printf("%s\n","----------------------" );
			result = amt * 0.77;
			break;
		
		case 3: 
			printf("%s \n","You are converting Pounds £ to Euros €");
			printf("%s\n","----------------------" );
			result = amt * 1.16;
			break;
		
		case 4: 
			printf("%s \n","You are converting Euros € to US Dollars $");
			printf("%s\n","----------------------" );
			result = amt * 1.12;
			break;
		
		case 5: 
			printf("%s \n","You are converting Pounds £ to US Dollars $");
			printf("%s\n","----------------------" );
			result = amt * 1.29;
			break;
		
		case 6: 
			printf("%s \n","You are converting Euros € to Pounds £");
			printf("%s\n","----------------------" );
			result = amt * 0.86;
			break;
		
	}
	return result;
}

void printconvertedvalue(int value, float result){
	
	switch(value){
		case 1: 
			printf("%s %f %s \n","Result : ",result,"Euros €");
			break;
		
		case 2: 
			printf("%s %f %s \n","Result : ",result,"Pounds £");
			break;
		
		case 3: 
			printf("%s %f %s \n","Result : ",result,"Euros €");
			break;
		
		case 4: 
			printf("%s %f %s \n","Result : ",result,"US $");
			break;
		
		case 5: 
			printf("%s %f %s \n","Result : ",result,"US $");
			break;
		
		case 6: 
			printf("%s %f %s \n","Result : ",result,"Pound £");
			break;
		
	}
}
void printamounttoconvert(int value, float amt){
	
	switch(value){
		case 1: 
			printf("%s %f %s \n","You entered : ",amt,"US Dollars $");
			break;
		
		case 2: 
			printf("%s %f %s \n","You entered : ",amt,"US Dollars $");
			break;
		
		case 3: 
			printf("%s %f %s \n","You entered : ",amt,"Pounds £");
			break;
		
		case 4: 
			printf("%s %f %s \n","You entered : ",amt,"Euros €");
			break;
		
		case 5: 
			printf("%s %f %s \n","You entered : ",amt,"Pounds £");
			break;
		
		case 6: 
			printf("%s %f %s \n","You entered : ",amt,"Euros €");
			break;
		
	}
}