#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - print all alphabet in lowercase
 */

void print_alphabet(void)
{
	char letter = 'a';
	while (letter <= 'z'){
	_putchar(letter);
	letter++;
}
	_putchar('\n');
}
int main(){
	print_alphabet();
	return 0;
}


