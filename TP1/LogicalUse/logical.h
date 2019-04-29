
void logical_opetator(char x){

	if (x == 'A')
	{
		/* code */
		printf("%s\n","AND OPERATION");
		printf("%s\n", "A       B      AND");
		for(int a = 0;a< 2 ; a++){
			for(int b = 0;b< 2 ; b++){
				printf("%i       %i        %i \n",a,b, a&&b);
			}
		}
	}

	if (x == 'O')
	{
		/* code */
		printf("%s\n","OR OPERATION");
		printf("%s\n", "A       B      OR");
		for(int a = 0;a< 2 ; a++){
			for(int b = 0;b< 2 ; b++){
				printf("%i       %i        %i \n",a,b, a || b);
			}
		}
	}

	if (x == 'X')
	{
		/* code */
		printf("%s\n","XOR OPERATION");
		printf("%s\n", "A       B      XOR");
		for(int a = 0;a< 2 ; a++){
			for(int b = 0;b< 2 ; b++){
				printf("%i       %i        %i \n",a,b, a ^ b);
			}
		}
	}

	
	
}