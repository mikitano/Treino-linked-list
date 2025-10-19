#ifndef TREINO_H
# define TREINO_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

void	ft_insert(t_node **head, int x);
void	ft_print(t_node *head);

#endif