/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:05:15 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/15 14:11:47 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*previous_node;
	t_list	*current_node;

	if (!del || !lst)
		return ;
	current_node = *lst;
	previous_node = current_node;
	while (current_node != NULL)
	{
		current_node = (current_node->next);
		del(previous_node->content);
		free(previous_node);
		previous_node = current_node;
	}
	*lst = NULL;
}
