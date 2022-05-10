#include "monty.h"
/**
 *main - take file.m input
 *@file: the file monty
 *Return: int (exit succes or failure)
 */

int get_op_func(char *line, stack_t **stack, unsigned int line_number)
{
	instruction_t func[] = {
		{"push", _push},
		{"pall", _pall},
		{"pint", _pint},
		{"pop", _pop},
		{"swap", _swap},
		{"add", _add},
		{"nop", _nop},
	};
}
