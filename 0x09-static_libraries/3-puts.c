#include "main.h"
#include <stdio.h>

/**
 * _puts - Prints a string followed by a new line
 * @str: The string to print
 *
 * This function prints each character of the input string `str`
 * followed by a newline character.
 */
void _puts(char *str)
{
	int i = 0;
	
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	_puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
