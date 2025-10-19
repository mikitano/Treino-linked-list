#ifndef TREINO_H
# define TREINO_H

# include <stdlib.h>
# include <stdio.h>

typedef struct s_node
{
	int				data;
	struct s_node	*next;
}	t_node;

void	ft_insert_in_position_n(int info, int n, t_node **head);
void	ft_print(t_node *head);

#endif