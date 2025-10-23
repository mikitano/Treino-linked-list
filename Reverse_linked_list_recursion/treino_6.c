#include "treino.h"

void	ft_reverse_print_recurusion(t_node *head)
{
	t_node	*temp;

	if (head == NULL)
		return ;
	ft_reverse_print_recurusion(temp->next);
	printf("%d", temp->data);
}

void	ft_reverse_list(t_node **head)
{
	t_node	*temp;

	temp = *head;
	if (temp->next == NULL)
	{
		head = temp;
		return ;
	}
	ft_reverse_list(head->next);
}
