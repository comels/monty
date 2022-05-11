#include "monty.h"
/**
 * _mul - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _mul(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		error = 1;
		return;
	}
	(*stack)->next->n *= (*stack)->n;
	_pop(stack, line_number);
}
