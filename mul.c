#include "monty.h"

/**
 * _mul - Function that multiplicates top values
 * @stack: stack structure
 * @line_number: Number of instructions
 */
void f_mul(stack_t **head, unsigned int line_number)
{
	stack_t *temp = NULL;
	int m;

	m = stack_len(*head);
	if (m < 2)
	{
		fprintf(stderr, "L%d: can't mul, stack too short\n", line_number);
		if (list_opcode != NULL)
			free_list_opcode(list_opcode);
		if (*head != NULL)
			free_list_stack(*head);
		exit(EXIT_FAILURE);
	}

	temp = *head;
	temp->next->m *= temp->m;
	pop(head, line_number);
