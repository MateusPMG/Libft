/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:18:54 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/15 15:11:45 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*current_node;
	t_list	*newlist_node;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist_node = ft_lstnew(lst);
	newlist = newlist_node;
	current_node = lst;
	while (current_node != NULL)
	{
		newlist_node->content = f(current_node->content);
		newlist_node->next = ft_lstnew(lst);
		current_node = current_node->next;
		newlist_node = newlist_node->next;
	}
	return (newlist);
}
