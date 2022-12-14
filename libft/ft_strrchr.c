/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mpatrao <mpatrao@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/28 16:57:04 by mpatrao           #+#    #+#             */
/*   Updated: 2022/11/16 17:07:58 by mpatrao          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;

	p = (char *)s;
	while (*s)
		s++;
	if (c == '\0')
		return ((char *)s);
	while (s >= p)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s--;
	}
	return (NULL);
}
