#include <stdio.h>
#include <string.h>

/* more headers go there */

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char str;

	for (str = 'a'; str <= 'z' ; str++)
		putchar(str);
	putchar('\n');
	return (0);

}
