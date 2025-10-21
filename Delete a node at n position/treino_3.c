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
	t_node	*temp;

	temp = head;
	printf("List:\n");
	while (!temp)
	{
		printf("%d\n", temp->data);
		temp = temp->next;
	}
}

void	ft_delete(int n, t_node **head)
{
	t_node	*temp1;
	t_node	*temp2
	int		i;

	temp1 = *head;
	if (n == 1)
	{
		*head = temp1->next;
		free(temp1);
		return ;
	}
	i = 0;
	for (i = 0; i < n-2; i++)
		temp1 = temp1->next;
	//temp points to (n-1)th node
	temp2 = temp1->next; //nth node
	temp1->next = temp2->next; //(n+1)th node
	free(temp2);
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
	ft_delete(n, &head);
	ft_print(head);
}