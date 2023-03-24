#include "monty.h"

int usage_error(void);
int malloc_error(void);
int f_open_error(char *filename);
int unknown_op_error(char *opcode, unsigned int line_number);
int no_int_error(unsigned int line_number);

/**
 * usage_error - Print usage error messages
 *
 * Return: (EXIT_FAILURE) always.
 */
int usage_error(void)
{
	fprintf(stderr, "USAGE: monty file\n");
	return (EXIT_FAILURE);
}

/**
 * malloc_error - print malloc error message
 * Return: (EXIT_FAILURE) always.
 */
int malloc_error(void)
{
	fprintf(stderr, "Error: malloc failed\n");
	return (EXIT_FAILURE);
}

/**
 * f_open_error - Print file openning error message
 * @filename: Name of file failed to open
 * Return: EXIT_FAILURE).
 */
int f_open_error(char *filename)
{
	fprintf(stderr, "Error: Can't open file %s\n", filename);
	return (EXIT_FAILURE);
}
/**
 * unknown_op_error - prints unknown instruction error messages.
 * @opcode: opcode where error occured
 * @line_number: Line number in monty bytecode file where error occurred.
 * Return: EXIT_FAILURE).
 */
int unknown_op_error(char *opcode, unsigned int line_number);
{
	fprintf(stderr, "L%u: unknown instruction %s\n", line_number, opcode);
	return (EXIT_FAILURE);
}
/**
 * no_int_error - prints invalid monty_push argument error messages
 * @line_number: Line number in monty bytecode file where error occurred.
 * Return: EXIT_FAILURE).
 */
int no_int_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: usage: push integer\n", line_number);
	return (EXIT_FAILURE);
}
