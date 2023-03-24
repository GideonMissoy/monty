#include "monty.h"

void monty_rotl(stack_t **stack, unsigned int line_number);
void monty_rotr(stack_t **stack, unsigned int line_number);
void monty_stack(stack_t **stack, unsigned int line_number);
void monty_queue(stack_t **stack, unsigned int line_number);

/**
* monty_rotl - rotates the top value of a stack_t linked listto the bottom.
* @stack: a pointer to the top node
* @line_number: the current wrking line number of a monty bytecode file
*/
void monty_rotl(stack_t **stack, unsigned int line_number)
{
	stack_t *top, *bottom;

	if ((*stack)->next == NULL || (*stack)->next->next == NULL)
		return;

	top = (*stack)->next;
	bottom = (*stack)->next;
	while (bottom->next != NULL)
		bottom = bottom->next;

	top->next->prev = *stack;
	(*stack)->next = top->next;
	bottom->next = top;
	top->next = NULL
	top->prev = bottom;

	(void)line_number;
}
/**
* monty_rotr - rotates the bottom value of a stack_t linked listto the top.
* @stack: a pointer to the top node
* @line_number: the current wrking line number of a monty bytecode file
*/
void monty_rotl(stack_t **stack, unsigned int line_number)
{
        stack_t *top, *bottom;

        if ((*stack)->next == NULL || (*stack)->next->next == NULL)
                return;

        top = (*stack)->next;
        bottom = (*stack)->next;
        while (bottom->next != NULL)
                bottom = bottom->next;

	bottom->prv->next = NULL;
	(*stack)->next = bottom;
	bottom->prev = *stack;
	bottom->next = top;
	top->prev = bottom;

	(void)line_number;
}
/**
* monty_stack - converts a queue to a stack
* @stack: a pointer to the top node
* @line_number: the current wrking line number of a monty bytecode file
*/
void monty_rotl(stack_t **stack, unsigned int line_number)
{
	(*stack)->n = STACK;
	(void)line_number;
}
/**
* monty_queue - converts a stack to a queue
* @stack: a pointer to the top node
* @line_number: the current wrking line number of a monty bytecode file
*/
void monty_rotl(stack_t **stack, unsigned int line_number)
{
        (*stack)->n = STACK;
        (void)line_number;
}
