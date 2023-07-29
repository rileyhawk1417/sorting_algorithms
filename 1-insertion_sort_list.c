#include "sort.h"

/**
* insertion_sort_list - Entry Point
*
* @list: List value
* Description: Performs the insertion sort algorithm
* Returns: Nothing
*/
void insertion_sort_list(listint_t **list)
{
listint_t *currentNode = NULL, *nextNode = NULL, *prevNode = NULL;

if (list == NULL || *list == NULL || (*list)->next == NULL)
	return;

for (currentNode = (*list)->next; currentNode != NULL; currentNode = nextNode)
{
nextNode = currentNode->next;
prevNode = currentNode->prev;

while (prevNode != NULL && prevNode->n > currentNode->n)
	{
	if (prevNode->prev != NULL)
		prevNode->prev->next = currentNode;
	else
		*list = currentNode;
	if (currentNode->next != NULL)
		currentNode->next->prev = prevNode;

	prevNode->next = currentNode->next;
	/*NOTE: Assign the nodes for currentNode*/
	currentNode->prev = prevNode->prev;
	currentNode->next = prevNode;
	/*NOTE: Assign the nodes for prevNode*/
	prevNode->prev = currentNode;
	prevNode = currentNode->prev;

	print_list(*list);
	}
}

}
