#include "monty.h"
/**
 * _tok - function that tokenise a line
 * @line: the line to tokenise
 * Return: tab of tokens
 */

char **_tok(char *line)
{
	int i = 0;
	char **tab_tokens = malloc(sizeof(char *) * 1024);
	char *token;

	if (tab_tokens == NULL)
	{
		perror("Error: malloc failed\n");
		exit(EXIT_FAILURE);
	}

	token = strtok(line, " ");
	while (token != NULL)
	{
		tab_tokens[i] = token;
		i++;
		token = strtok(NULL, " ");
	}
	tab_tokens[i] = NULL;

	return (tab_tokens);
}
