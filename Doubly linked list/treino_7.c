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

	newNode = create_new_node(i);
	if (*head == NULL)
	{
		*head = newNode;
		return ;
	}
	newNode->next = *head;
	(*head)->prev = newNode;
	*head = newNode;
}

void	insert_at_tail(int i, t_node **head)
{
	t_node	*newNode;
	t_node	*temp;

	newNode = create_new_node(i);
	if (*head == NULL)
	{
		*head = newNode;
		return ;
	}
	temp = *head;
	while (temp->next != NULL)
		temp = temp->next;
	temp->next = newNode;
	newNode->prev = temp;
}

void	ft_print(t_node *head)
{
	t_node	*temp;

	temp = head;
	printf("Foward: ");
	while (temp)
	{
		printf("%d", temp->data);
		temp = temp->next;
	}
	printf("\n");
}
void	ft_reverse_print(t_node *head)
{
	t_node	*temp;

	temp = head;
	if (temp == NULL)
		return ;
	while (temp->next != NULL)
		temp = temp->next;
	printf("Reverse: ");
	while(temp)
	{
		printf("%d", temp->data);
		temp = temp->prev;
	}
	printf("\n");
}

int	main (void)
{
	t_node	*head;

	head = NULL;
	insert_at_head(2, &head);
	ft_print(head);
	ft_reverse_print(head);
	insert_at_head(4, &head);
	ft_print(head);
	ft_reverse_print(head);
	insert_at_head(6, &head);
	ft_print(head);
	ft_reverse_print(head);
	
	printf("\n");
	
	insert_at_tail(5, &head);
	ft_print(head);
	ft_reverse_print(head);
	insert_at_tail(8, &head);
	ft_print(head);
	ft_reverse_print(head);
	insert_at_tail(0, &head);
	ft_print(head);
	ft_reverse_print(head);
}