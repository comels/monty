#include "monty.h"

/**
 *main - take file.m input
 *@file: the file monty
 *Return: int (exit succes or failure)
 */

int main(int argc, char **argv)
{
	FILE *ptr;

	if(argc != 2)
	{
		fprintf(2, "USAGE: monty file\n");
		exit(EXIT_FAILURE);
	}
	ptr = fopen(argv[1], "r");

	if (!ptr)
	{
		fprintf(2, "Error: Can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
}
