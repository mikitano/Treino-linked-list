#include "treino.h"

void	ft_insert_in_position_n(int info, int n, t_node **head)
{
	t_node	*temp1;
	t_node	*temp2;
	int		i;

	temp1 = malloc(sizeof(t_node));
	if (!temp1)
		return ;
	temp1->data = info;
	temp1->next = NULL;
	if (n == 1)
	{
		temp1->next = *head;
		*head = temp1;
		return ;
	}
	temp2 = *head;
	for (i = 0; i < n-2; i++)
		temp2 = temp2->next;
	temp1->next = temp2->next;
	temp2->next = temp1;
}

void	ft_print(t_node *head)
{
	t_node	*temp;

	temp = head;
	while (temp != NULL)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}

int	main(void)
{
	t_node	*head;

	head = NULL;
	ft_insert_in_position_n(2, 1, &head);
	ft_print(head);
	printf("\n");
	ft_insert_in_position_n(3, 2, &head);
	ft_print(head);
	printf("\n");
	ft_insert_in_position_n(4, 1, &head);
	ft_print(head);
	printf("\n");
	ft_insert_in_position_n(5, 2, &head);
	ft_print(head);
}
