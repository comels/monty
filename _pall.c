#include "monty.h"
/**
 * _pall - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
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
