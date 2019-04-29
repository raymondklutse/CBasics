#include <stdio.h>

int main(int argc, char const *argv[])
{
	int interger_number;
	double double_number;
	char character;
	short short_number;
	unsigned short unsigned_short_number;
	long long_number;

	printf("%s %ld \n", "The size of interger is = ", sizeof(interger_number));
	printf("%s %ld \n", "The size of double is = ", sizeof(double_number));
	printf("%s %ld \n", "The size of char is = ", sizeof(character));
	printf("%s %ld \n", "The size of short is = ", sizeof(short_number));
	printf("%s %ld \n", "The size of unsigned short is = ", sizeof(unsigned_short_number));
	printf("%s %ld \n", "The size of long is = ", sizeof(long_number));
	printf("%s %ld \n", "The size of 2 intergers is = ", sizeof(interger_number) + sizeof(interger_number));
	return 0;
}