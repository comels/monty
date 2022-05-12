#include "monty.h"
/**
 * _rotl - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *last;

	*stack = (*stack)->next;
	(*stack)->prev = NULL;

	last = *stack;

	while (last->next)
	{
		last = last->next;
	}
	last->next = temp;
	temp->prev = last;
	temp->next = NULL;
}
