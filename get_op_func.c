#include "monty.h"
/**
 *get_op_func - give the good function
 *@line: the line read
 *@stack: the list
 *@line_number: the number of the line
 *Return: int (exit succes or failure)
 */

int get_op_func(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t func[] = {
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
		{"sub", _sub},
		{"mul", _mul},
		{"div", _div},
		{"mod", _mod},
		{NULL, NULL},
	};
	int i = 0;

	while (func[i].opcode)
	{
		if (strcmp(line, func[i].opcode) == 0)
		{
			func[i].f(stack, line_number);
			return (EXIT_SUCCESS);
		}
		i++;
	}
	fprintf(stderr, "L%d: unknown instruction %s\n", line_number, line);
	error = 1;
	return (EXIT_FAILURE);
}
