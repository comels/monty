#include "monty.h"
/**
 * _rotl - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp;
	stack_t *new;
	int num = (*stack)->n;

	_pop(stack, line_number);

	temp = *stack;

	new = malloc(sizeof(stack_t));
	if (new == NULL)
	{
		return;
	}

	new->n = num;
	new->next = NULL;

	if (*stack == NULL)
	{
		new->prev = NULL;
		*stack = new;
	}
	while (temp->next)
		temp = temp->next;

	temp->next = new;
	new->prev = temp;
}
