#include "monty.h"
/**
 * _read - function that read the lines from a file
 * @ptr: the file to read
 * Return: tab of string
 */

char **_read(FILE *ptr)
{
	char **tab_lines;
	char *line;
	size_t size = 0;
	int i = 0;

	while (getline(&line, &size, ptr) != - 1)
	{
		tab_lines[i] = line;
		i++;
	}
	tab_lines[i + 1] = '\0';
	return (tab_lines);
}
