#include <stdio.h>

/**
 * b4main - executes before main
 * Return: void
 */
void b4main(void) __attribute__((constructor));
void b4main(void)
{
	printf("You're beat! and yet, you must allow,");
	printf("\nI bore my house upon my back!\n");
}
