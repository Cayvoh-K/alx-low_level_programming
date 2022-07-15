#include "lists.h"

/**
* add_node - adds a new node at the beginning of a list_t.
* @head: pointer to first element of the list.
* @str: data
* Return: lists_t
*/
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;

temp = malloc(sizeof(list_t));
if (temp == NULL)
return (NULL);
/* temp now points to first element*/
temp->next = *head;
temp->str = strdup(str);
temp->len = _strlen(str);

*head = temp;

return (*head);

}
