#include "treino.h"

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

}

void	ft_delete(int n)
{

}

int	main (void)
{
	t_node	*head;
	int		n;

	head = NULL;
	ft_insert(2, &head);
	ft_insert(4, &head);
	ft_insert(6, &head);
	ft_insert(5, &head);
	ft_print(head);
	printf("Enter the position you want to delete:\n");
	scanf("%d", &n);
	ft_delete(n);
	ft_print(head);
}