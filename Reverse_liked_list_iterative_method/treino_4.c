#include "treino.h"

void	ft_reverse(t_node **head)
{
	t_node	*current;
	t_node	*prev;
	t_node	*n_next;

	current = *head;
	prev = NULL;
	while (current != NULL)
	{
		n_next = current->next;
		current->next = prev;
		prev = current;
		current = n_next;
	}
		*head = prev;
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
void	ft_print(t_node *head)
{
	t_node	*temp;

	temp = head;
	printf("List:\n");
	while (temp)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

int	main(void)
{
	t_node	*head;

	head = NULL;
	ft_insert (2, &head);
	ft_insert (4, &head);
	ft_insert (6, &head);
	ft_insert (8, &head);
	ft_print(head);
	ft_reverse (&head);
	ft_print(head);
}
