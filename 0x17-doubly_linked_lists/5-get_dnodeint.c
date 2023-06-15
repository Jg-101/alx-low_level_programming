#include "lists.h"

/**
 * get_dnodeint_at_index - Loc a node in a dlistint_t list.
 * @head: The head of the dlistint_t list.
 * @index: The node to loc.
 *
 * Return: If the node does not exst - NULL.
 *         Otherwise - the addr of the located node.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
