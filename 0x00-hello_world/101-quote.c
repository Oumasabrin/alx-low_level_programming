#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
const char* text="and that piece of art is useful\" - Dora Korpar, 2015-10-19";
fputs(text,stdout);	
return (1);
}
