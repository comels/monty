#include "monty.h"
/**
 * _push - function that ...
 * @stack: pointer of a list ???
 * @line_number: int ???
 */

void _push(char *token, stack_t **stack, unsigned int line_number)
{
	stack_t *new = NULL;
	int i;

	if (token == NULL)
	{
		fprintf(stderr, "1 : L%d: usage: push integer\n", line_number);
		exit(EXIT_FAILURE);
	}
	for (i = 0; token[i] != '\0'; i++)
	{
		if (isdigit(token[i]) == 0)
		{
			fprintf(stderr, "2 : L%d: usage: push integer\n", line_number);
			exit(EXIT_FAILURE);
		}
	}
	new = malloc(sizeof(stack_t));

	if (new == NULL)
	{
		perror("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}
	new->n = atoi(token);
	new->prev = NULL;
	new->next = NULL;

	if (*stack)
	{
		(*stack)->prev = new;
		new->next = *stack;
	}
	*stack = new;
}
