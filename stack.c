#include "monty.h"
#include <string.h>

void free_stack(stack_t **stack);
int init_stack(stack_t **stack);
int check_mode(stack_t **stack);

/**
* free _stack - frees a stack_t stack
* @stack: a pointer to the top (stack) or (bottom) of a stack_t
*/
void free_stack(stack_t **stack)
{
	stack_t *tmp = *stack;

	while (*stack)
	{
		tmp = (*stack)->next;
		free(*stack);
		*stack = tmp;
	}
}

/**
* init_stack - initializes a stack_t with beginning stackk and ending queue nodes
* @stack: a pointer to an uninitialized stack_t stack.
* Return: if an error occurs - EXIT_FAILURE
*		otherwise - EXIT_SUCCESS
*/
int init_stack(stack_t **stack)
{
	stack_t *s;

	s = malloc(sizeof(stack_t));
	if (s == NULL)
		return (malloc_error());

	s->n = STACK;
	s->prev = NULL;
	s->next = NULL;

	*stack = s;

	return (EXIT_SUCCESS);
}
/**
* check_mode - checks if a stack_t linked list is in stack or queue mode
* @stack: a pointer to the top (stack) or (bottom) of a stack_t list
* Return: if stack_t is in stack mode - STACK (0)
*	  if stack_t is in queue mode - QUEUE (1)
*	  otherwise - 2
*/
int check_mode(stack_t *stack)
{
	if (stack->n == STACK)
		return (STACK);
	else if (stack->n == QUEUE)
		return (QUEUE);
	return (2);
}
