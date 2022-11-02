/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:20:22 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/02 13:24:30 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	k;
	unsigned char	*p;

	p = (unsigned char *)s;
	k = (unsigned char)c;
	while (*p++ && n--)
		if (*p == k)
			return (p);
	return (NULL);
}
