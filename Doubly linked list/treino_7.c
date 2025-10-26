#include "treino.h"

t_node	*create_new_node(int i)
{
	t_node	*new_node;
	
	new_node = malloc(sizeof(t_node));
	new_node->data = i;
	new_node->prev = NULL;
	new_node->next = NULL;
	return (new_node);
}

void	insert_at_head(int i, t_node **head)
{
	t_node	*newNode;
	t_node	temp;

	new_node = create_new_node(i);
	if (head == NULL)
	{
		head = newNode;
		return ;
	}
	temp
	else
	{
		while (temp)

	}
}

int	main (void)
{
	t_node	*head;
}