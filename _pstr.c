#include "monty.h"
/**
 * _pstr - function that print a char
 * @stack: the list
 * @line_number: the number of line
 */

void _pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *temp = *stack;
	(void)line_number;

	if (*stack == NULL)
	{
		return;
	}
	while (temp && temp->n != 0 && temp->n < 127 && temp->n > 0)
	{
		putchar(temp->n);
		temp = temp->next;
	}
	putchar('\n');
}
