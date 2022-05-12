#include "monty.h"
/**
 * _rotl - function that ...
 * @stack: the list
 * @line_number: the number of line
 */

void _rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	stack_t *last;

	(void)line_number;

	if (*stack == NULL)
		return;

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
