#include "monty.h"
/**
 * _mod - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _mod(stack_t **stack, unsigned int line_number)
{
	if (*stack == NULL || (*stack)->next == NULL)
	{
		fprintf(stderr, "L%d: can't mod, stack too short\n", line_number);
		error = 1;
		return;
	}
	if ((*stack)->n == 0)
	{
		fprintf(stderr, "L%d: division by zero\n", line_number);
		error = 1; 
		return;
	}
	(*stack)->next->n %= (*stack)->n;
	_pop(stack, line_number);
}
