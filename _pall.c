#include "monty.h"
/**
 * _pall - function that print all the list
 * @stack: the list to print
 * @line_number: line
 */

void _pall(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;

	(void)line_number;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
