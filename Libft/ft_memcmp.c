/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/31 12:58:33 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/02 14:46:46 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (--n && *p1 == *p2)
	{
		p1++;
		p2++;
	}
	return (*p1 - *p2);
}
