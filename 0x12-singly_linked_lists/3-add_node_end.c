#include "lists.h"

/**
*add_node_end - adds a new node at the end of a list_t.
*@head: pointer to head element.
*@str: string data in list
*Return: list_1
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *new, *tmp;
size_t n;

new = malloc(sizeof(list_t));

if (new != NULL)
{
	new->str = strdup(str);

	for (n = 0; str[n]; n++)
		;
	new->len = n;
	new->next = NULL;
	tmp = *head;
	if (tmp == NULL)
	{
		*head = new;
	}
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = new;
	}
	return (*head);
}
else
return (NULL);
}
