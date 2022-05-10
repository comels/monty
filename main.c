#include "monty.h"

/**
 *main - take file.m input
 *@file: the file monty
 *Return: int (exit succes or failure)
 */

int main(int argc, char **argv)
{
	FILE *ptr;
	char **lines;
	char **tab_tokens;
	int i = 0;

	if(argc != 2)
	{
		perror("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	ptr = fopen(argv[1], "r");

	if (!ptr)
	{
		fprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}

	lines = _read(ptr);

	while (lines[i])
	{
		tab_tokens = _tok(lines[i]); // push 1  pall 3
	}
}
