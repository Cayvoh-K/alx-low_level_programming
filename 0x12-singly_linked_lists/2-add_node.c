#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t.
* @head: pointer to first element of the list.
* @str: data
* Return: lists_t
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *new;
size_t n;

new = malloc(sizeof(list_t));

if (new != NULL)
{
	new->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = *head;
	*head = new;
	return (*head);
}
else
return (NULL);
}
