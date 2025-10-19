#include "treino.h"

void	ft_insert(t_node **head, int x)
{
	t_node	*new;

	new = malloc(sizeof(t_node));
	if (!new)
		return;
	new->data = x;
	new->next = *head;
	*head = new;
}

void	ft_print(t_node *head)
{
	t_node	*temp;

	temp = head;
	printf("List:\n");
	while (temp != NULL)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

int	main(void)
{
	t_node	*head;
	int		n;
	int		i;
	int		x;

	n = 0;
	i = 0;
	head = NULL;
	printf("How many numbers?\n");
	scanf("%d", &n);
	for (i = 0; i < n; i++)
	{
		printf("Enter the number:\n");
		scanf("%d", &x);
		ft_insert(&head, x);
		ft_print(head);
	}
	return (0);
}
