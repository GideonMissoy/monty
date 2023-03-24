#include "monty.h"

void monty_nop(stack_t **stack, unsigned int line_number);
void monty_pchar(stack_t **stack, unsigned int line_number);
void monty_pstr(stack_t **stack, unsigned int line_number);

/**
 * monty_nop - Does nothing for monty opcode
 * @stack: a pointer to top mode node of a stack in linked list
 * @line_number: the current working line number of a monty bytecodes fil
 * Return: void
 */
void monty_nop(stack_t **stack, unsigned int line_number)
{
	(void)stack;
	(void)line_number;
}

/**
 * monty_pchar - prints character in top value node
 * @stack: a pointer to top mode node of a stack in linked list
 * @line_number: the current working line number of a monty bytecodes fil
 * Return: void
 */
void monty_pchar(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL)
	{
		set_op_tok_error(pchar_error(line_number,
					"value out of range"));
		return;
	}
	printf("%c\n", (*stack)->next->n);
}

/**
 * monty_pstr - prints character in top value node
 * @stack: a pointer to top mode node of a stack in linked list
 * @line_number: the current working line number of a monty bytecodes fil
 * Return: void
 */
void monty_pstr(stack_t **stack, unsigned int line_number)
{
	stack_t *tmp = (*stack)->next;

	while (tmp && tmp->n != 0 && (tmp->n > 0 && tmp->n <= 127))
	{
		printf("%c", tmp->n);
		tmp = tmp->next;
	}
	printf("\n");
	(void)line_number;
}
