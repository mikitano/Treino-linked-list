#include "treino.h"

void	ft_print_recursion(t_node *head)
{
	t_node	*temp;

	if (head == NULL)
		return ;
	temp = head;
	printf("%d",temp->data);
	ft_print_recursion(temp->next);
}

void	ft_reverse_print_recurusion(t_node *head)
{
	t_node	*temp;

	if(head == NULL)
		return ;
	ft_reverse_print_recurusion(temp->next);
	printf("%d", temp->data);
}

void	ft_insert(int i, t_node **head)
{
	t_node	*new;
	t_node	*temp;

	new = malloc(sizeof(t_node));
	if (!new)
		return ;
	new->data = i;
	new->next = NULL;
	if (*head == NULL)
		*head = new;
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
}

int	main(void)
{
	t_node	*head;

	head = NULL;
	ft_insert(2, &head);
	ft_insert(4, &head);
	ft_insert(6, &head);
	ft_insert(5, &head);
	ft_print_recursion(head);
	printf("\n");
	ft_reverse_print_recurusion(head);
}
