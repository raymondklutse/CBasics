#include <stdio.h>
#include <ctype.h>

int main(int argc, char const *argv[])
{
	// Get the character to be written 
    char ch = 'G'; 
  	char newline = '\n';
    // Write the Character to stdout 
    putchar(ch); 
	putchar(newline); 

	printf("%s\n","Check if character is printable");

	printf("%s %i \n","Ch is printable ",isprint(ch));
	printf("%s %i \n","Newline is printable ",isprint(newline));
	return 0;
}