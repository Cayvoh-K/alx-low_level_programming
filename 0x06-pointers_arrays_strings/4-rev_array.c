#include "main.h"

/**
* reverse_array -> reversing the content of an array of integers
* @a: array of integers
* @n: number of element of an array
* Return: returns void
*/

void reverse_array(int *a, int n)
{
int *p, i, aux, k;

p = a;
for (i = 0; i < n; i++)
p++;
for (k = 0; k < i / 2; k++)
{
aux = a[k];
a[k] = *p;
*p = aux;
p--;
}
}
