#include "monty.h"

void monty_add(stack_t **stack, unsigned int line_number);
void monty_sub(stack_t **stack, unsigned int line_number);
void monty_div(stack_t **stack, unsigned int line_number);
void monty_mul(stack_t **stack, unsigned int line_number);
void monty_mod(stack_t **stack, unsigned int line_number);

/**
 * monty_add - adds the top two values of a stack_t linked list
 * @stack: A pointer to the node of a stack_t linked list
 * @line_number: The current working line number of a Monty bytecodes file
 * Return : void
 */
void monty_add(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "add"));
		return;
	}
	(*stack)->next->next->n += (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_sub - subtract the top two values of a stack_t linked list
 * @stack: A pointer to the node of a stack_t linked list
 * @line_number: The current working line number of a Monty bytecodes file
 * Return : void
 */
void monty_sub(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "sub"));
		return;
	}
	(*stack)->next->next->n -= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_div - divides the second values of a stack_t linked list
 * @stack: A pointer to the node of a stack_t linked list
 * @line_number: The current working line number of a Monty bytecodes file
 * Return : void
 */
void monty_div(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "div"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
	}
	(*stack)->next->next->n /= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_mul - multiply the sec values of a stack_t linked list
 * @stack: A pointer to the node of a stack_t linked list
 * @line_number: The current working line number of a Monty bytecodes file
 * Return : void
 */
void monty_mul(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mull"));
		return;
	}
	(*stack)->next->next->n *= (*stack)->next->n;
	monty_pop(stack, line_number);
}

/**
 * monty_mod - computes the moduls of the second values from top of
 * stack_t linked list
 * @stack: A pointer to the node of a stack_t linked list
 * @line_number: The current working line number of a Monty bytecodes file
 * Return : void
 */
void monty_mod(stack_t **stack, unsigned int line_number)
{
	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
	{
		set_op_tok_error(short_stack_error(line_number, "mod"));
		return;
	}

	if ((*stack)->next->n == 0)
	{
		set_op_tok_error(div_error(line_number));
	}
	(*stack)->next->next->n %= (*stack)->next->n;
	monty_pop(stack, line_number);
}
