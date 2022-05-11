#include "monty.h"
/**
 * _pint - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _pint(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL)
	{
		fprintf(stderr, "L%d: can't pint, stack empty\n", line_number);
		error = 1;
		return;
	}
	printf("%d\n", (*stack)->n);
}
