#include "monty.h"

/**
 *main - take file.m input
 *@argv: tab of arguments
 *@argc: number of arguments
 *Return: int (exit succes or failure)
 */

int main(int argc, char **argv)
{
	FILE *ptr;
	char *line = NULL, *token = NULL;
	size_t size = 0;
	stack_t *stack = NULL;
	unsigned int line_number = 0;

	if (argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	ptr = fopen(argv[1], "r");
	if (ptr == NULL)
	{
		fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while (getline(&line, &size, ptr) != -1)
	{
		line_number++;
		token = strtok(line, "\n\t ");
		if (token == NULL)
			continue;
		if (strcmp(token, "push") == 0)
		{
			token = strtok(NULL, "\n\t ");
			_push(token, &stack, line_number);
		}
		else
			get_op_func(token, &stack, line_number);
	}
	free_all(stack, line, ptr);
	if (error == 1)
		exit(EXIT_FAILURE);
	return (EXIT_SUCCESS);
}
