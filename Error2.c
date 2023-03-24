#include "monty.h"

int pop_error(unsigned int line_number);
int pint_error(unsigned int line_number);
int short_stack_error(unsigned int line_number, char *op);
int div_error(unsigned int line_number);
int pchar_error(unsigned int line_number, char *message);

/**
 * pop_error - Prints pop error message for empty stacks.
 * @line_number: Line number in monty bytecode file where error occurred.
 * Return: (EXIT_FAILURE).
 */
int pop_error(unsigned int line_number);
{
	fprintf(stderr, "L%u: can't pop an empty stack\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pint_error - prints pint error message for empty stacks.
 * @line_number: Line number in monty bytecode file where error occurred.
 * Return: EXIT_FAILURE).
 */
int pint_error(unsigned int line_number);
{
	printf(stderr, "L%d: can't pint, stack empty\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * short_stack_error - Print monty math func error message for stacks/queue
 * @line_number: Line number in monty bytecode file where error occurred.
 * @op: Operation where error occured
 * Return: EXIT_FAILURE).
 */
int short_stack_error(unsigned int line_number, char *op)
{
	printf(stderr, "L%u: can't %s, stack too short\n", line_number, op);
	return (EXIT_FAILURE);
}

/**
 * div_error - prints division error messages for division by 0
 * @line_number: Line number in monty bytecode file where error occurred.
 * Return: EXIT_FAILURE).
 */
int div_error(unsigned int line_number)
{
	fprintf(stderr, "L%u: division by zero\n", line_number);
	return (EXIT_FAILURE);
}

/**
 * pchar_error - prints pchar error messages for empty stacks/non-char values
 * @line_number: Line number in monty bytecode file where error occurred.
 * @message: The correspnding error message to print.
 * Return: EXIT_FAILURE).
 */
int pchar_error(unsigned int line_number, char *message)
{
	printf(stderr, "L%u: can't pchar, %s\n", line_number, message);
	return (EXIT_FAILURE);
}
