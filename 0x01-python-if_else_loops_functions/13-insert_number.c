#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * insert_node - Inserts a number into a sorted singly-linked list
 * @head: A pointer the head if the linked list.
 * @number: the number to insert.
 * Return: If the function fails - NULL.
 * 	otherwise - a pointer to the new node.
 */

typedef struct Node
{
	int data;
	struct Node* next;
} listint_t;

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node = (listint_t *)malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
        
        	return NULL;
	}


    new_node->data = number;
    new_node->next = NULL;


    if (*head == NULL || number < (*head)->data)
	{
        	new_node->next = *head;
        	*head = new_node;
        	return new_node;
	}


    listint_t *current = *head;
    while (current->next != NULL && current->next->data < number)
	{
        	current = current->next;
	}


	new_node->next = current->next;
	current->next = new_node;
	return new_node;
}


void print_list(listint_t *head)
{
	while (head != NULL)
	{
        	printf("%d ", head->data);
        	head = head->next;
	}
	printf("\n");
}


void free_list(listint_t *head)
{
	listint_t *temp;
	while (head != NULL)
	{
        	temp = head;
        	head = head->next;
        	free(temp);
    	}
}

int main()
{
	listint_t *head = NULL;

	insert_node(&head, 10);
	insert_node(&head, 20);
	insert_node(&head, 30);
	insert_node(&head, 25);

	printf("Linked list after insertion: ");
	print_list(head);

	free_list(head);

	return 0;
}
