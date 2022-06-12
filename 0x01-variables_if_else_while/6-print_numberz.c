#include <stdio.h>
#include <string.h>
#include <ctype.h>

/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int number;

	for (number = 48; number <= 57; number++)
		putchar(number);
	putchar('\n');
	return (0);

}
