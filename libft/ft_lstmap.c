/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 14:18:54 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/16 16:44:56 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlist_node;
	t_list	*newlist;

	if (!lst || !f || !del)
		return (NULL);
	newlist = NULL;
	while (lst != NULL)
	{
		newlist_node = ft_lstnew(f(lst->content));
		if (!newlist_node)
			del(newlist_node);
		ft_lstadd_back(&newlist, newlist_node);
		lst = lst->next;
	}
	return (newlist);
}
