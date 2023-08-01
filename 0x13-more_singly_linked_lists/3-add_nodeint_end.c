#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * add_node_end - Adds a new node at the end.
 * of a list_t list.
 * @head: Head of the linked list.
 * @str: String to store in the list
 * Return: address of the head.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	list_t *new_node, *current_node;
	size_t n;
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	for (n = 0; str[n]; n++)
		;
	new_node->len = n;
	new_node->next = NULL;
	current_node = *head;
	if (current_node == NULL)
	{
		*head = new_node;
	}
	else
	{
		while (current_node->next != NULL)
			current_node = current_node->next;
		current_node->next = new_node;
	}
	return (*head);
}
