#include "sort.h"

/**
* insert_helper - Entry Point
*
* @ref_node: listint_t List value reference node
* @keyNode: listint_t list value node key value
* Description: Helps swap values
* Returns: Nothing
*/
void insert_helper(listint_t **ref_node, listint_t *keyNode)
{
listint_t *currentNode;

if (*ref_node == NULL)
	*ref_node = keyNode;

else if ((*ref_node)->n >= keyNode->n)
{
	keyNode->next = *ref_node;
	keyNode->next->prev = keyNode;
	*ref_node = keyNode;
}

else
{
currentNode = *ref_node;

while (currentNode->next != NULL && currentNode->next->n < keyNode->n)
	currentNode = currentNode->next;

keyNode->next = currentNode->next;

if (currentNode->next != NULL)
	keyNode->next->prev = keyNode;

currentNode->next = keyNode;
keyNode->prev = currentNode;

}

}


/**
* insertion_sort_list - Entry Point
*
* @list: List value
* Description: Performs the insertion sort algorithm
* Returns: Nothing
*/
void insertion_sort_list(listint_t **list)
{

listint_t *sortedList = NULL;
listint_t *keyNode = *list;
listint_t *nextNode;

while (keyNode != NULL)
{

	nextNode = keyNode->next;
	keyNode->prev = keyNode->next = NULL;
	insert_helper(&sortedList, keyNode);
	keyNode = nextNode;
}

*list = sortedList;
}
